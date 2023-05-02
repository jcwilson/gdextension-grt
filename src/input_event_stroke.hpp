#pragma once

#include <godot_cpp/classes/input_event_mouse_button.hpp>

namespace godot {

class InputEventStroke : public InputEventMouseButton  {
    GDCLASS(InputEventStroke, InputEventMouseButton)

private:

protected:
    static void _bind_methods();

public:
    InputEventStroke();
    ~InputEventStroke();

    String get_version() const;
};

}