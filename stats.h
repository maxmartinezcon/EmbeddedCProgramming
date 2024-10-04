/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file <stats.h> 
 * @brief <Se definirán las funciones correspondientes y librerías >
 *
 * <Se van a formar los prototipos de las funciones utilizadas y las librerías, además se van a agregar descripciones de las funciones en cuestión>
 *
 * @author <Maximiliano Martínez>
 * @date <03 - octubre - 2024 >
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 


/**
 * @brief <Add Brief Description of Function Here>
 *
 * <Add Extended Description Here>
 *
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 *
 * @return <Add Return Informaiton here>
 */


void print_statistics(unsigned char media ,unsigned char mediana, unsigned char valorMinimo, unsigned char valorMaximo);
void print_array(unsigned char *arr, unsigned int length);
unsigned char find_median(unsigned char *arr, unsigned int length);
unsigned char find_mean(unsigned char *arr, unsigned int length);
unsigned char find_maximum(unsigned char *arr, unsigned int length);
unsigned char find_minimum(unsigned char *arr, unsigned int length);
void sort_array(unsigned char *arr, unsigned int length);

#endif /* __STATS_H__ */
