#pragma once

#include <type_traits>

namespace std::experimental
{
// Primary type categories.
template <class type>
concept void_c                                = is_void_v                            <type>;
template <class type>
concept null_pointer_c                        = is_null_pointer_v                    <type>;
template <class type>
concept integral_c                            = is_integral_v                        <type>;
template <class type>
concept floating_point_c                      = is_floating_point_v                  <type>;
template <class type>
concept array_c                               = is_array_v                           <type>;
template <class type>
concept pointer_c                             = is_pointer_v                         <type>;
template <class type>
concept lvalue_reference_c                    = is_lvalue_reference_v                <type>;
template <class type>
concept rvalue_reference_c                    = is_rvalue_reference_v                <type>;
template <class type>
concept member_object_pointer_c               = is_member_object_pointer_v           <type>;
template <class type>
concept member_function_pointer_c             = is_member_function_pointer_v         <type>;
template <class type>
concept enum_c                                = is_enum_v                            <type>;
template <class type>
concept union_c                               = is_union_v                           <type>;
template <class type>
concept class_c                               = is_class_v                           <type>;
template <class type>
concept function_c                            = is_function_v                        <type>;
                                                                                   
// Composite type categories.                                                      
template <class type>
concept reference_c                           = is_reference_v                       <type>;
template <class type>
concept arithmetic_c                          = is_arithmetic_v                      <type>;
template <class type>
concept fundamental_c                         = is_fundamental_v                     <type>;
template <class type>
concept object_c                              = is_object_v                          <type>;
template <class type>
concept scalar_c                              = is_scalar_v                          <type>;
template <class type>
concept compound_c                            = is_compound_v                        <type>;
template <class type>
concept member_pointer_c                      = is_member_pointer_v                  <type>;
                                                                                   
// Type properties.                                                           
template <class type>
concept const_c                               = is_const_v                           <type>;
template <class type>
concept volatile_c                            = is_volatile_v                        <type>;
template <class type>
concept trivial_c                             = is_trivial_v                         <type>;
template <class type>
concept trivially_copyable_c                  = is_trivially_copyable_v              <type>;
template <class type>
concept standard_layout_c                     = is_standard_layout_v                 <type>;
template <class type>
concept empty_c                               = is_empty_v                           <type>;
template <class type>
concept polymorphic_c                         = is_polymorphic_v                     <type>;
template <class type>
concept abstract_c                            = is_abstract_v                        <type>;
template <class type>
concept final_c                               = is_final_v                           <type>;
template <class type>
concept aggregate_c                           = is_aggregate_v                       <type>;
template <class type>
concept signed_c                              = is_signed_v                          <type>;
template <class type>
concept unsigned_c                            = is_unsigned_v                        <type>;
template <class type>
concept bounded_array_c                       = is_bounded_array_v                   <type>;
template <class type>
concept unbounded_array_c                     = is_unbounded_array_v                 <type>;
template <class type>
concept scoped_enum_c                         = is_scoped_enum_v                     <type>;
template <class type, class... arguments>
concept constructible_c                       = is_constructible_v                   <type, arguments...>;
template <class type>
concept default_constructible_c               = is_default_constructible_v           <type>;
template <class type>
concept copy_constructible_c                  = is_copy_constructible_v              <type>;
template <class type>
concept move_constructible_c                  = is_move_constructible_v              <type>;
template <class to, class from>
concept assignable_c                          = is_assignable_v                      <to, from>;
template <class type>
concept copy_assignable_c                     = is_copy_assignable_v                 <type>;
template <class type>
concept move_assignable_c                     = is_move_assignable_v                 <type>;
template <class type, class other>
concept swappable_with_c                      = is_swappable_with_v                  <type, other>;
template <class type>
concept swappable_c                           = is_swappable_v                       <type>;
template <class type>
concept destructible_c                        = is_destructible_v                    <type>;
template <class type, class... arguments>
concept trivially_constructible_c             = is_trivially_constructible_v         <type, arguments...>;
template <class type>
concept trivially_default_constructible_c     = is_trivially_default_constructible_v <type>;
template <class type>
concept trivially_copy_constructible_c        = is_trivially_copy_constructible_v    <type>;
template <class type>
concept trivially_move_constructible_c        = is_trivially_move_constructible_v    <type>;
template <class to, class from>
concept trivially_assignable_c                = is_trivially_assignable_v            <to, from>;
template <class type>
concept trivially_copy_assignable_c           = is_trivially_copy_assignable_v       <type>;
template <class type>
concept trivially_move_assignable_c           = is_trivially_move_assignable_v       <type>;
template <class type>
concept trivially_destructible_c              = is_trivially_destructible_v          <type>;
template <class type, class... arguments>
concept nothrow_constructible_c               = is_nothrow_constructible_v           <type, arguments...>;
template <class type>
concept nothrow_default_constructible_c       = is_nothrow_default_constructible_v   <type>;
template <class type>
concept nothrow_copy_constructible_c          = is_nothrow_copy_constructible_v      <type>;
template <class type>
concept nothrow_move_constructible_c          = is_nothrow_move_constructible_v      <type>;
template <class to, class from>
concept nothrow_assignable_c                  = is_nothrow_assignable_v              <to, from>;
template <class type>
concept nothrow_copy_assignable_c             = is_nothrow_copy_assignable_v         <type>;
template <class type>
concept nothrow_move_assignable_c             = is_nothrow_move_assignable_v         <type>;
template <class type, class other>
concept nothrow_swappable_with_c              = is_nothrow_swappable_with_v          <type, other>;
template <class type>
concept nothrow_swappable_c                   = is_nothrow_swappable_v               <type>;
template <class type>
concept nothrow_destructible_c                = is_nothrow_destructible_v            <type>;
template <class type>
concept has_virtual_destructor_c              = has_virtual_destructor_v             <type>;
template <class type>
concept has_unique_object_representations_c   = has_unique_object_representations_v  <type>;
template <class type>
concept reference_constructs_from_temporary_c = is_trivially_copy_constructible_v    <type>;
template <class type>
concept reference_converts_from_temporary_c   = is_trivially_copy_constructible_v    <type>;

// Type relations.
template <class type, class other>
concept same_c                                = is_same_v                            <type, other>;
template <class base, class derived>
concept base_of_c                             = is_base_of_v                         <base, derived>;
template <class from, class to>
concept convertible_c                         = is_convertible_v                     <from, to>;
template <class from, class to>
concept nothrow_convertible_c                 = is_nothrow_convertible_v             <from, to>;
template <class type, class other>
concept layout_compatible_c                   = is_layout_compatible_v               <type, other>;
template <class base, class derived>
concept pointer_interconvertible_base_of_c    = is_pointer_interconvertible_base_of_v<base, derived>;
template <class type, class... arguments>
concept invocable_c                           = is_invocable_v                       <   type, arguments...>;
template <class r, class type, class... arguments>
concept invocable_r_c                         = is_invocable_r_v                     <r, type, arguments...>;
template <class type, class... arguments>
concept nothrow_invocable_c                   = is_nothrow_invocable_v               <   type, arguments...>;
template <class r, class type, class... arguments>
concept nothrow_invocable_r_c                 = is_nothrow_invocable_r_v             <r, type, arguments...>;

// Logical operator traits.
template <class... types>
concept conjunction_c                         = conjunction_v                        <types...>;
template <class... types>
concept disjunction_c                         = disjunction_v                        <types...>;
template <class type>
concept negation_c                            = negation_v                           <type>;
}
