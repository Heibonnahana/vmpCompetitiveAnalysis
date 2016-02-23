/* 
 * initialization.h: Virtual Machine Placement Problem - Initialization Stage Header
 * Date: 17-11-2014
 * Author: Fabio Lopez Pires (flopezpires@gmail.com)
 * Corresponding Conference Paper: A Many-Objective Optimization Framework for Virtualized Datacenters
 */

/* include libraries */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define NUMBER_VM_PER_DC 100 // Number of VMs VMj in DCc;

/* function headers definitions */
int** initialization(int number_of_individuals, int h_size, int v_size, int **V, int max_SLA);
int generate_solution_position(int max_posible, int SLA);


// Heuristics
float** utilization_initialization(int h_size);
int** placement_initialization(int h_size);
