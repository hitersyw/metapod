// Copyright 2011, 2012,
//
// Maxime Reis
//
// JRL/LAAS, CNRS/AIST
//
// This file is part of metapod.
// metapod is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// metapod is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
// You should have received a copy of the GNU Lesser General Public License
// along with metapod.  If not, see <http://www.gnu.org/licenses/>.

/*
 * This file defines the macro that creates the bodies classes
 */

#ifndef metapod_BODY_MACROS_HH
# define metapod_BODY_MACROS_HH

namespace metapod
{

  // Create a body
  #define CREATE_BODY(classname,                           \
                      hasparent,                           \
                      parentname,                          \
                      jointname)                           \
    class classname                                        \
    {                                                      \
      public:                                              \
        enum { HAS_PARENT = hasparent };                   \
        static const std::string name;                     \
        static const int label;                            \
        static const double mass;                          \
        static const vector3d CoM;                         \
        static const matrix3d inertie;                     \
        static PluckerTransform iX0;                       \
        static Velocity vi;                                \
        static Acceleration ai;                            \
        static Force Fext;                                 \
        static Inertia I;                                  \
        typedef parentname Parent;                         \
        typedef jointname Joint;                           \
  }

} // end of namespace metapod

#endif
