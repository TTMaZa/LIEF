/* Copyright 2017 R. Thomas
 * Copyright 2017 Quarkslab
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#include "LIEF/MachO/EnumToString.h"
#include "LIEF/MachO/EnumToString.hpp"

#include "LIEF/MachO/enums.hpp"
#include "LIEF/MachO/enums.h"


extern "C"
{

const char* LOAD_COMMAND_TYPES_to_string(enum LOAD_COMMAND_TYPES e) {
  return LIEF::MachO::to_string(static_cast<LIEF::MachO::LOAD_COMMAND_TYPES>(e));
}


const char* MACHO_TYPES_to_string(enum MACHO_TYPES e) {
  return LIEF::MachO::to_string(static_cast<LIEF::MachO::MACHO_TYPES>(e));
}


const char* FILE_TYPES_to_string(enum FILE_TYPES e) {
  return LIEF::MachO::to_string(static_cast<LIEF::MachO::FILE_TYPES>(e));
}


const char* CPU_TYPES_to_string(enum CPU_TYPES e) {
  return LIEF::MachO::to_string(static_cast<LIEF::MachO::CPU_TYPES>(e));
}


const char* HEADER_FLAGS_to_string(enum HEADER_FLAGS e) {
  return LIEF::MachO::to_string(static_cast<LIEF::MachO::HEADER_FLAGS>(e));
}


const char* MachO_SECTION_TYPES_to_string(enum SECTION_TYPES e) {
  return LIEF::MachO::to_string(static_cast<LIEF::MachO::SECTION_TYPES>(e));
}


const char* MachO_SYMBOL_TYPES_to_string(enum SYMBOL_TYPES e) {
  return LIEF::MachO::to_string(static_cast<LIEF::MachO::SYMBOL_TYPES>(e));
}


const char* N_LIST_TYPES_to_string(enum N_LIST_TYPES e) {
  return LIEF::MachO::to_string(static_cast<LIEF::MachO::N_LIST_TYPES>(e));
}


const char* SYMBOL_DESCRIPTIONS_to_string(enum SYMBOL_DESCRIPTIONS e) {
  return LIEF::MachO::to_string(static_cast<LIEF::MachO::SYMBOL_DESCRIPTIONS>(e));
}







}
