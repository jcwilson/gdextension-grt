#include <iostream>
#include <godot_cpp/core/class_db.hpp>
#include <GRT.h>
#include "input_event_stroke.hpp"

using namespace godot;

void InputEventStroke::_bind_methods() {
    ClassDB::bind_method(D_METHOD("get_version"), &InputEventStroke::get_version);
}

InputEventStroke::InputEventStroke() {
    // initialize any variables here
}

InputEventStroke::~InputEventStroke() {
    // add your cleanup here
}

String InputEventStroke::get_version() const {
    return String(GRT::GRTBase::getGRTVersion().c_str());
}