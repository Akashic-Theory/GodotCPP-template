#include <godot_cpp/godot.hpp>
#include <godot_cpp/core/class_db.hpp>

void register_gameplay_types(godot::ModuleInitializationLevel level) {
    if (level != godot::ModuleInitializationLevel::MODULE_INITIALIZATION_LEVEL_SCENE) {
        return;
    }

    // Register Classes
}

void unregister_gameplay_types(godot::ModuleInitializationLevel level) {
    if (level != godot::MODULE_INITIALIZATION_LEVEL_SCENE) {
        return;
    }
}

extern "C" {
    GDExtensionBool GDE_EXPORT {{cookiecutter.entry_symbol}}(const GDExtensionInterface* interface, const GDExtensionClassLibraryPtr library, GDExtensionInitialization* initialization) {
        godot::GDExtensionBinding::InitObject init_object(interface, library, initialization);
        init_object.register_initializer(register_gameplay_types);
        init_object.register_terminator(unregister_gameplay_types);
        init_object.set_minimum_library_initialization_level(godot::ModuleInitializationLevel::MODULE_INITIALIZATION_LEVEL_SCENE);

        return init_object.init();
    }
}
