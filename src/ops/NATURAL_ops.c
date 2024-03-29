#include "../mesh.h"
#include "../utils/string_H.h"

void natural_config(Mesh *mesh_ptr){
    // Set natural API
    // mesh_ptr->available_apis[0] = -1; // Should find available slot, then assign

    // Add device to device_list
    Device natural_device = {}; // Literally just guessing it's CPU

    #ifdef AMD64
        copy_str(natural_device.api_id, "AMD64", API_ID_LEN);
    #endif
    #ifdef IA32
        copy_str(natural_device.api_id, "IA32", API_ID_LEN);
    #endif
    #ifdef ARM
        copy_str(natural_device.api_id, "ARM", API_ID_LEN);
    #endif

    add_device(mesh_ptr->device_list, natural_device);
}