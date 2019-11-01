//## Copyright (c) 2017-2019 The Khronos Group Inc.
//## Copyright (c) 2019 Collabora, Ltd.
//##
//## Licensed under the Apache License, Version 2.0 (the "License");
//## you may not use this file except in compliance with the License.
//## You may obtain a copy of the License at
//##
//##     http://www.apache.org/licenses/LICENSE-2.0
//##
//## Unless required by applicable law or agreed to in writing, software
//## distributed under the License is distributed on an "AS IS" BASIS,
//## WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//## See the License for the specific language governing permissions and
//## limitations under the License.
//##
//## ---- Exceptions to the Apache 2.0 License: ----
//##
//## As an exception, if you use this Software to generate code and portions of
//## this Software are embedded into the generated code as a result, you may
//## redistribute such product without providing attribution as would otherwise
//## be required by Sections 4(a), 4(b) and 4(d) of the License.
//##
//## In addition, if you combine or link code generated by this Software with
//## software that is licensed under the GPLv2 or the LGPL v2.0 or 2.1
//## ("`Combined Software`") and if a court of competent jurisdiction determines
//## that the patent provision (Section 3), the indemnity provision (Section 9)
//## or other Section of the License conflicts with the conditions of the
//## applicable GPL or LGPL license, you may retroactively and prospectively
//## choose to deem waived or otherwise exclude such Section(s) of the License,
//## but only in their entirety and only with respect to the Combined Software.



namespace OPENXR_HPP_NAMESPACE {

/*!
 * @defgroup enums Flags
 * @brief C++ flags classes corresponding to OpenXR C flags and flagbits, plus associated utility functions.
 * @{
 */

//# for flags in gen.api_flags
//#     set projected_type = project_type_name(flags.name)
//#     set bitmask = bitmask_for_flags(flags)
//#     set projected_bits_type = project_type_name(flags.valid_flags)
/*{ protect_begin(flags) }*/
//! @brief Flags class associated with /*{flags.name}*/
//!
//! See the related specification text at /*{ make_spec_url(flags.name) }*/
enum class /*{projected_bits_type }*/ : XrFlags64 {
    None = 0,
    //# for val in bitmask.values
    /*{ create_flag_value(val.name, flags.valid_flags) }*/ = /*{val.name}*/,
    //# endfor
    AllBits = 0
              //# for val in bitmask.values
              | /*{ val.name}*/
    //# endfor
};

using /*{projected_type }*/ = Flags</*{projected_bits_type }*/, /*{flags.name}*/>;

OPENXR_HPP_INLINE /*{projected_type }*/ operator|( /*{projected_bits_type }*/ bit0, /*{projected_bits_type }*/ bit1 ) {
    return /*{projected_type }*/( bit0 ) | bit1;
}

OPENXR_HPP_INLINE /*{projected_type }*/ operator~( /*{projected_bits_type }*/ bits ) {
    return ~( /*{projected_type }*/( bits ) );
}

/*{ protect_end(flags) }*/
//# endfor

//! @}

}  // namespace OPENXR_HPP_NAMESPACE
