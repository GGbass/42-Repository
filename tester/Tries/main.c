#include <stdio.h>
void	change_str(char **string)
{
	if (*string)
		*string = "Maria Cambiada sim importar el espacio";
}

int	main(void)
{
	char	*string;

	string = "Maria Del Carmen";
	change_str(&string);
	printf("%s\n", string);
/* 	string = "Maria del Pilar";
	printf("\n%s", string); */
	return (0);
}

/* Pasamos la direccion de memoria del array el cual es otro puntero 
 la variable debe recibir doble puntero ya que la dirrecion de un punto * mas el puntero de la string *
 si el puntero apunta a un contenido, cambiamos el contenido */

/* #include <stdio.h>

 typedef struct 
 {
	int age;
	char *name;
	char *charge;
 } employer;


int	main(void)
{
	employer s1;
	s1.age = 25;
	s1.name = "Gonzalo Garcia";
	s1.charge = "student";
	printf ("name: %s age: %d and is a %s", s1.name, s1.age, s1.charge );
	return (0);
} */