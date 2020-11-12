/* register_types.cpp */

#include "register_types.h"
#include "core/class_db.h"
#include "cSharedMemory.h"

void register_GodotSharedMemory_types() {
	ClassDB::register_class<cSharedMemory>();
   ClassDB::register_class<cSharedMemorySemaphore>();
   ClassDB::register_class<cTorchModel>();
}

void unregister_GodotSharedMemory_types() {
   //nothing to do here
}