#include <unistd.h>
#include <stdlib.h>
#include <elf.h>
#include <fcntl.h>
#include <stdio.h>

/**
 * read_elf_header - read an elf header
 * @fd: the file discriptor
 * @header: a pointer to an Elf64_Ehdr file strcuture
 *
 * Return: nothing
 */
void read_elf_header(int fd, Elf64_Ehdr *header)
{
	if (read(fd, header, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr))
	{
		perror("read");
		exit(98);
	}
}
/**
 * validate_elf_file - checks if the file is an elf file
 * @header: a pointe to the header to check
 *
 * Return: nothing
 */
void validate_elf_file(Elf64_Ehdr *header)
{
	if (header->e_ident[EI_MAG0] != ELFMAG0 ||
			header->e_ident[EI_MAG1] != ELFMAG1
			|| header->e_ident[EI_MAG2] != ELFMAG2
			|| header->e_ident[EI_MAG3] != ELFMAG3)
	{
		fprintf(stderr, "Error: not an ELF file\n");
		exit(98);
	}
}
/**
 * display_elf_header - displays all the data in the elf header
 * @header: a pointer to the elf header
 *
 * Return: nothing
 */
void display_elf_header(Elf64_Ehdr *header)
{
	int i;

	printf("Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", header->e_ident[i]);
	}
	printf("\nClass:           ");
	printf("%s\n", header->e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "ELF32");
	printf("Data:             ");
	printf("%s\n", header->e_ident[EI_DATA] == ELFDATA2LSB ?
			"2's complement, little endian" : "2's complement, big endian");
	printf("Version:          ");
	printf("%u (current)\n", header->e_ident[EI_VERSION]);
	printf("0S/ABI:           ");
	printf("%u\n", header->e_ident[EI_OSABI]);
	printf("ABI Version:      ");
	printf("%u\n", header->e_ident[EI_ABIVERSION]);
	printf("Type:             ");
	printf("%u\n", header->e_type);
	printf("Entry point address:       ");
	printf("%#08x\n", (unsigned int)header->e_entry);

}

/**
 * main - displays the information contained
 * in the ELF header at the start of an Elf
 * file
 * @argc: the number of arguments passed
 * @argv: a pointer to the strings passed
 *
 * Return: 0 if successful otherwise return 98
 */
int main(int argc, char **argv)
{
	int fd;
	Elf64_Ehdr header;

	if (argc != 2)
	{
		dprintf(2, "Usage: %s filename\n", argv[0]);
		exit(98);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
	{
		dprintf(2, "The file %s cannot be opened\n", argv[1]);
		exit(98);
	}
	if (read(fd, &header, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr))
	{
		dprintf(2, "Error: Cannot read %s file\n", argv[1]);
		close(fd);
	       exit(98);
	}
	if (header.e_ident[EI_MAG0] != ELFMAG0 ||
			header.e_ident[EI_MAG1] != ELFMAG1 ||
			header.e_ident[EI_MAG2] != ELFMAG2 ||
			header.e_ident[EI_MAG3] != ELFMAG3
	   )
	{
		dprintf(2, "Error: The file %s is not an Elf file\n", argv[1]);
		exit(98);
	}
	display_elf_header(&header);
	close(fd);
	exit(0);
}
