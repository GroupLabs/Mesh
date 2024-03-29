#include <stdio.h>
#include "../mesh.h"

// Only exists to debug vals
int main(){

    Mesh* mesh = new_mesh();

    config(mesh);

    printf("\nBuilt mesh object");

    printf("\n\nDevice count: %d\n\n", mesh->device_list->device_count);

    int device_count = mesh->device_list->device_count;

    for(int i = 0; i < device_count; i++){
        printf("API: %s\n", mesh->device_list->devices[i].api);
        printf("Type: %s\n", mesh->device_list->devices[i].type);
        printf("Device ID: %d\n", mesh->device_list->devices[i].device_id);
        printf("Thread ID: %d\n", mesh->device_list->devices[i].thread_id);
    }

    free_mesh(mesh);
}