/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   punteros.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 15:04:35 by marvin            #+#    #+#             */
/*   Updated: 2023/11/05 15:04:35 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
struct Persona
{
	int edad;
	char nombre[30];
	char apellidos[50]; 
};
 
int main()
{
	int a = 3;
	char micadena[] = "Hola, esto es una cadena";
	//Declaramos un struct Persona 
	struct Persona p1;
	//Le asignamos valores
	p1.edad = 32;
	strncpy(p1.nombre, "Ivan\0",5);
	strncpy(p1.apellidos, "Ramon Moran\0",12);

	//Imprimimos el contenido de a y su direccion de memoria
	printf("El contenido de a es: %d\n", a);
	printf("a se encuentra en la posicion de memoria: %p\n", &a);

	//Imprimimos el contenido de micadena y su direccion de memoria
	printf("El contenido de micadena es: %s\n", micadena);
	printf("micadena se encuentra en la posicion de memoria: %p\n", micadena);
	//Otra forma de acceder a la posicion de memoria de un array
	printf("micadena se encuentra en la posicion de memoria: %p\n", &micadena[0]);

	//Imprimimos el contenido de nuestro struct Persona
	printf("Nombre: %s\n", p1.nombre);
	printf("Apellidos: %s\n", p1.apellidos);
	printf("Edad: %d\n", p1.edad);

	//Imprimimos las posiciones de memoria
	//Primero el struct
	printf("La posicion de memoria del struct es: %p\n", &p1);
	//Ahora la posicion de memoria de sus propiedades
	printf("La posicion de memoria de la propiedad nombre es: %p\n", &p1.nombre);
	printf("La posicion de memoria de la propiedad apellidos es: %p\n", &p1.apellidos);
	printf("La posicion de memoria de la propiedad edad es: %p\n", &p1.edad);

	return (0);
}