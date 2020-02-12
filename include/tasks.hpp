#pragma once

#include "general.hpp"
#include "controllerScreen.hpp"
#include "auton.hpp"

static pros::Task OTWarning (OTWarning_task, (void *)"", TASK_PRIORITY_DEFAULT, TASK_STACK_DEPTH_DEFAULT, "OTWarning");
static pros::Task contScreen (contScreenTask, (void *)"", TASK_PRIORITY_DEFAULT, TASK_STACK_DEPTH_DEFAULT, "contScreen");
// static pros::Task autonSwitcher (autonSwitcherTask, (void *)"", TASK_PRIORITY_DEFAULT, TASK_STACK_DEPTH_DEFAULT, "autonSwitcher");