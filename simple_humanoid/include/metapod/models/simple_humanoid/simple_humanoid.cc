// Copyright 2011, 2012, 2013
//
// Maxime Reis (JRL/LAAS, CNRS/AIST)
// Sébastien Barthélémy (Aldebaran Robotics)
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


// This file has been generated by the metapod robotbuilder library.

#include "simple_humanoid.hh"

namespace metapod {

const std::string simple_humanoid::Node0::joint_name = std::string("WAIST");
const std::string simple_humanoid::Node0::body_name = std::string("WAIST_LINK0");
const Spatial::Transform simple_humanoid::Node0::Xt = Spatial::Transform(
    matrix3dMaker(1, 0, 0, 0, 1, 0, 0, 0, 1),
    Vector3d(0, 0, 0));
const FloatType simple_humanoid::Node0::mass = 27;
const Spatial::Inertia simple_humanoid::Node0::I = spatialInertiaMaker(
    27,
    Vector3d(0, 0, 0.0375),
    matrix3dMaker(1, 0, 0, 0, 1, 0, 0, 0, 1));

simple_humanoid::Node0::Node0():
  joint() {}

const std::string simple_humanoid::Node1::joint_name = std::string("WAIST_P");
const std::string simple_humanoid::Node1::body_name = std::string("WAIST_LINK1");
const Spatial::Transform simple_humanoid::Node1::Xt = Spatial::Transform(
    matrix3dMaker(1, 0, 0, 0, 1, 0, 0, 0, 1),
    Vector3d(0, 0, 0));
const FloatType simple_humanoid::Node1::mass = 6;
const Spatial::Inertia simple_humanoid::Node1::I = spatialInertiaMaker(
    6,
    Vector3d(0, 0, -0.1),
    matrix3dMaker(1, 0, 0, 0, 1, 0, 0, 0, 1));

simple_humanoid::Node1::Node1():
  joint(0, 1, 0) {}

const std::string simple_humanoid::Node2::joint_name = std::string("WAIST_R");
const std::string simple_humanoid::Node2::body_name = std::string("WAIST_LINK2");
const Spatial::Transform simple_humanoid::Node2::Xt = Spatial::Transform(
    matrix3dMaker(1, 0, 0, 0, 1, 0, 0, 0, 1),
    Vector3d(0, 0, 0));
const FloatType simple_humanoid::Node2::mass = 30;
const Spatial::Inertia simple_humanoid::Node2::I = spatialInertiaMaker(
    30,
    Vector3d(0.11, 0, 0.25),
    matrix3dMaker(1, 0, 0, 0, 1, 0, 0, 0, 1));

simple_humanoid::Node2::Node2():
  joint() {}

const std::string simple_humanoid::Node3::joint_name = std::string("CHEST");
const std::string simple_humanoid::Node3::body_name = std::string("WAIST_LINK3");
const Spatial::Transform simple_humanoid::Node3::Xt = Spatial::Transform(
    matrix3dMaker(1, 0, 0, 0, 1, 0, 0, 0, 1),
    Vector3d(0, 0, 0.35));
const FloatType simple_humanoid::Node3::mass = 13;
const Spatial::Inertia simple_humanoid::Node3::I = spatialInertiaMaker(
    13,
    Vector3d(0, 0, 0),
    matrix3dMaker(1, 0, 0, 0, 1, 0, 0, 0, 1));

simple_humanoid::Node3::Node3():
  joint(0, 0, 1) {}

const std::string simple_humanoid::Node4::joint_name = std::string("LARM_SHOULDER_P");
const std::string simple_humanoid::Node4::body_name = std::string("LARM_LINK1");
const Spatial::Transform simple_humanoid::Node4::Xt = Spatial::Transform(
    matrix3dMaker(1, 0, 0, 0, 1, 0, 0, 0, 1),
    Vector3d(0, 0.21, 0));
const FloatType simple_humanoid::Node4::mass = 3;
const Spatial::Inertia simple_humanoid::Node4::I = spatialInertiaMaker(
    3,
    Vector3d(0.1, 0, 0),
    matrix3dMaker(1, 0, 0, 0, 1, 0, 0, 0, 1));

simple_humanoid::Node4::Node4():
  joint(0, 1, 0) {}

const std::string simple_humanoid::Node5::joint_name = std::string("LARM_SHOULDER_R");
const std::string simple_humanoid::Node5::body_name = std::string("LARM_LINK2");
const Spatial::Transform simple_humanoid::Node5::Xt = Spatial::Transform(
    matrix3dMaker(1, 0, 0, 0, 1, 0, 0, 0, 1),
    Vector3d(0, 0, 0));
const FloatType simple_humanoid::Node5::mass = 0.6;
const Spatial::Inertia simple_humanoid::Node5::I = spatialInertiaMaker(
    0.6,
    Vector3d(0, 0, -0.1),
    matrix3dMaker(1, 0, 0, 0, 1, 0, 0, 0, 1));

simple_humanoid::Node5::Node5():
  joint() {}

const std::string simple_humanoid::Node6::joint_name = std::string("LARM_SHOULDER_Y");
const std::string simple_humanoid::Node6::body_name = std::string("LARM_LINK3");
const Spatial::Transform simple_humanoid::Node6::Xt = Spatial::Transform(
    matrix3dMaker(1, 0, 0, 0, 1, 0, 0, 0, 1),
    Vector3d(0, 0, -0.263));
const FloatType simple_humanoid::Node6::mass = 1;
const Spatial::Inertia simple_humanoid::Node6::I = spatialInertiaMaker(
    1,
    Vector3d(0, 0, 0),
    matrix3dMaker(1, 0, 0, 0, 1, 0, 0, 0, 1));

simple_humanoid::Node6::Node6():
  joint(0, 0, 1) {}

const std::string simple_humanoid::Node7::joint_name = std::string("LARM_ELBOW");
const std::string simple_humanoid::Node7::body_name = std::string("LARM_LINK4");
const Spatial::Transform simple_humanoid::Node7::Xt = Spatial::Transform(
    matrix3dMaker(1, 0, 0, 0, 1, 0, 0, 0, 1),
    Vector3d(0, 0, 0));
const FloatType simple_humanoid::Node7::mass = 0.6;
const Spatial::Inertia simple_humanoid::Node7::I = spatialInertiaMaker(
    0.6,
    Vector3d(0, 0, -0.3),
    matrix3dMaker(1, 0, 0, 0, 1, 0, 0, 0, 1));

simple_humanoid::Node7::Node7():
  joint(0, 1, 0) {}

const std::string simple_humanoid::Node8::joint_name = std::string("LARM_WRIST_Y");
const std::string simple_humanoid::Node8::body_name = std::string("LARM_LINK5");
const Spatial::Transform simple_humanoid::Node8::Xt = Spatial::Transform(
    matrix3dMaker(1, 0, 0, 0, 1, 0, 0, 0, 1),
    Vector3d(0, 0, -0.247));
const FloatType simple_humanoid::Node8::mass = 0.4;
const Spatial::Inertia simple_humanoid::Node8::I = spatialInertiaMaker(
    0.4,
    Vector3d(0, 0, 0.1),
    matrix3dMaker(1, 0, 0, 0, 1, 0, 0, 0, 1));

simple_humanoid::Node8::Node8():
  joint(0, 0, 1) {}

const std::string simple_humanoid::Node9::joint_name = std::string("LARM_WRIST_P");
const std::string simple_humanoid::Node9::body_name = std::string("LARM_LINK6");
const Spatial::Transform simple_humanoid::Node9::Xt = Spatial::Transform(
    matrix3dMaker(1, 0, 0, 0, 1, 0, 0, 0, 1),
    Vector3d(0, 0, 0));
const FloatType simple_humanoid::Node9::mass = 0.4;
const Spatial::Inertia simple_humanoid::Node9::I = spatialInertiaMaker(
    0.4,
    Vector3d(-0.1, 0, 0),
    matrix3dMaker(1, 0, 0, 0, 1, 0, 0, 0, 1));

simple_humanoid::Node9::Node9():
  joint(0, 1, 0) {}

const std::string simple_humanoid::Node10::joint_name = std::string("LARM_WRIST_R");
const std::string simple_humanoid::Node10::body_name = std::string("LARM_LINK7");
const Spatial::Transform simple_humanoid::Node10::Xt = Spatial::Transform(
    matrix3dMaker(1, 0, 0, 0, 1, 0, 0, 0, 1),
    Vector3d(0, 0, 0));
const FloatType simple_humanoid::Node10::mass = 0.4;
const Spatial::Inertia simple_humanoid::Node10::I = spatialInertiaMaker(
    0.4,
    Vector3d(0, 0, -0.1),
    matrix3dMaker(1, 0, 0, 0, 1, 0, 0, 0, 1));

simple_humanoid::Node10::Node10():
  joint() {}

const std::string simple_humanoid::Node11::joint_name = std::string("RARM_SHOULDER_P");
const std::string simple_humanoid::Node11::body_name = std::string("RARM_LINK1");
const Spatial::Transform simple_humanoid::Node11::Xt = Spatial::Transform(
    matrix3dMaker(1, 0, 0, 0, 1, 0, 0, 0, 1),
    Vector3d(0, -0.21, 0));
const FloatType simple_humanoid::Node11::mass = 3;
const Spatial::Inertia simple_humanoid::Node11::I = spatialInertiaMaker(
    3,
    Vector3d(0.1, 0, 0),
    matrix3dMaker(1, 0, 0, 0, 1, 0, 0, 0, 1));

simple_humanoid::Node11::Node11():
  joint(0, 1, 0) {}

const std::string simple_humanoid::Node12::joint_name = std::string("RARM_SHOULDER_R");
const std::string simple_humanoid::Node12::body_name = std::string("RARM_LINK2");
const Spatial::Transform simple_humanoid::Node12::Xt = Spatial::Transform(
    matrix3dMaker(1, 0, 0, 0, 1, 0, 0, 0, 1),
    Vector3d(0, 0, 0));
const FloatType simple_humanoid::Node12::mass = 0.6;
const Spatial::Inertia simple_humanoid::Node12::I = spatialInertiaMaker(
    0.6,
    Vector3d(0, 0, -0.1),
    matrix3dMaker(1, 0, 0, 0, 1, 0, 0, 0, 1));

simple_humanoid::Node12::Node12():
  joint() {}

const std::string simple_humanoid::Node13::joint_name = std::string("RARM_SHOULDER_Y");
const std::string simple_humanoid::Node13::body_name = std::string("RARM_LINK3");
const Spatial::Transform simple_humanoid::Node13::Xt = Spatial::Transform(
    matrix3dMaker(1, 0, 0, 0, 1, 0, 0, 0, 1),
    Vector3d(0, 0, -0.263));
const FloatType simple_humanoid::Node13::mass = 1;
const Spatial::Inertia simple_humanoid::Node13::I = spatialInertiaMaker(
    1,
    Vector3d(0, 0, 0),
    matrix3dMaker(1, 0, 0, 0, 1, 0, 0, 0, 1));

simple_humanoid::Node13::Node13():
  joint(0, 0, 1) {}

const std::string simple_humanoid::Node14::joint_name = std::string("RARM_ELBOW");
const std::string simple_humanoid::Node14::body_name = std::string("RARM_LINK4");
const Spatial::Transform simple_humanoid::Node14::Xt = Spatial::Transform(
    matrix3dMaker(1, 0, 0, 0, 1, 0, 0, 0, 1),
    Vector3d(0, 0, 0));
const FloatType simple_humanoid::Node14::mass = 0.6;
const Spatial::Inertia simple_humanoid::Node14::I = spatialInertiaMaker(
    0.6,
    Vector3d(0, 0, -0.3),
    matrix3dMaker(1, 0, 0, 0, 1, 0, 0, 0, 1));

simple_humanoid::Node14::Node14():
  joint(0, 1, 0) {}

const std::string simple_humanoid::Node15::joint_name = std::string("RARM_WRIST_Y");
const std::string simple_humanoid::Node15::body_name = std::string("RARM_LINK5");
const Spatial::Transform simple_humanoid::Node15::Xt = Spatial::Transform(
    matrix3dMaker(1, 0, 0, 0, 1, 0, 0, 0, 1),
    Vector3d(0, 0, -0.247));
const FloatType simple_humanoid::Node15::mass = 0.4;
const Spatial::Inertia simple_humanoid::Node15::I = spatialInertiaMaker(
    0.4,
    Vector3d(0, 0, 0.1),
    matrix3dMaker(1, 0, 0, 0, 1, 0, 0, 0, 1));

simple_humanoid::Node15::Node15():
  joint(0, 0, 1) {}

const std::string simple_humanoid::Node16::joint_name = std::string("RARM_WRIST_P");
const std::string simple_humanoid::Node16::body_name = std::string("RARM_LINK6");
const Spatial::Transform simple_humanoid::Node16::Xt = Spatial::Transform(
    matrix3dMaker(1, 0, 0, 0, 1, 0, 0, 0, 1),
    Vector3d(0, 0, 0));
const FloatType simple_humanoid::Node16::mass = 0.4;
const Spatial::Inertia simple_humanoid::Node16::I = spatialInertiaMaker(
    0.4,
    Vector3d(-0.1, 0, 0),
    matrix3dMaker(1, 0, 0, 0, 1, 0, 0, 0, 1));

simple_humanoid::Node16::Node16():
  joint(0, 1, 0) {}

const std::string simple_humanoid::Node17::joint_name = std::string("RARM_WRIST_R");
const std::string simple_humanoid::Node17::body_name = std::string("RARM_LINK7");
const Spatial::Transform simple_humanoid::Node17::Xt = Spatial::Transform(
    matrix3dMaker(1, 0, 0, 0, 1, 0, 0, 0, 1),
    Vector3d(0, 0, 0));
const FloatType simple_humanoid::Node17::mass = 0.4;
const Spatial::Inertia simple_humanoid::Node17::I = spatialInertiaMaker(
    0.4,
    Vector3d(0, 0, -0.1),
    matrix3dMaker(1, 0, 0, 0, 1, 0, 0, 0, 1));

simple_humanoid::Node17::Node17():
  joint() {}

const std::string simple_humanoid::Node18::joint_name = std::string("LLEG_HIP_R");
const std::string simple_humanoid::Node18::body_name = std::string("LLEG_LINK1");
const Spatial::Transform simple_humanoid::Node18::Xt = Spatial::Transform(
    matrix3dMaker(1, 0, 0, 0, 1, 0, 0, 0, 1),
    Vector3d(0, 0.09, 0));
const FloatType simple_humanoid::Node18::mass = 2.5;
const Spatial::Inertia simple_humanoid::Node18::I = spatialInertiaMaker(
    2.5,
    Vector3d(0, 0.1, 0),
    matrix3dMaker(1, 0, 0, 0, 1, 0, 0, 0, 1));

simple_humanoid::Node18::Node18():
  joint() {}

const std::string simple_humanoid::Node19::joint_name = std::string("LLEG_HIP_P");
const std::string simple_humanoid::Node19::body_name = std::string("LLEG_LINK2");
const Spatial::Transform simple_humanoid::Node19::Xt = Spatial::Transform(
    matrix3dMaker(1, 0, 0, 0, 1, 0, 0, 0, 1),
    Vector3d(0, 0, 0));
const FloatType simple_humanoid::Node19::mass = 2;
const Spatial::Inertia simple_humanoid::Node19::I = spatialInertiaMaker(
    2,
    Vector3d(0, 0, -0.15),
    matrix3dMaker(1, 0, 0, 0, 1, 0, 0, 0, 1));

simple_humanoid::Node19::Node19():
  joint(0, 1, 0) {}

const std::string simple_humanoid::Node20::joint_name = std::string("LLEG_HIP_Y");
const std::string simple_humanoid::Node20::body_name = std::string("LLEG_LINK3");
const Spatial::Transform simple_humanoid::Node20::Xt = Spatial::Transform(
    matrix3dMaker(1, 0, 0, 0, 1, 0, 0, 0, 1),
    Vector3d(0, 0, -0.3535));
const FloatType simple_humanoid::Node20::mass = 5.1;
const Spatial::Inertia simple_humanoid::Node20::I = spatialInertiaMaker(
    5.1,
    Vector3d(0, 0.04, 0),
    matrix3dMaker(1, 0, 0, 0, 1, 0, 0, 0, 1));

simple_humanoid::Node20::Node20():
  joint(0, 0, 1) {}

const std::string simple_humanoid::Node21::joint_name = std::string("LLEG_KNEE");
const std::string simple_humanoid::Node21::body_name = std::string("LLEG_LINK4");
const Spatial::Transform simple_humanoid::Node21::Xt = Spatial::Transform(
    matrix3dMaker(1, 0, 0, 0, 1, 0, 0, 0, 1),
    Vector3d(0, 0, 0));
const FloatType simple_humanoid::Node21::mass = 7;
const Spatial::Inertia simple_humanoid::Node21::I = spatialInertiaMaker(
    7,
    Vector3d(0, 0, -0.3),
    matrix3dMaker(1, 0, 0, 0, 1, 0, 0, 0, 1));

simple_humanoid::Node21::Node21():
  joint(0, 1, 0) {}

const std::string simple_humanoid::Node22::joint_name = std::string("LLEG_ANKLE_P");
const std::string simple_humanoid::Node22::body_name = std::string("LLEG_LINK5");
const Spatial::Transform simple_humanoid::Node22::Xt = Spatial::Transform(
    matrix3dMaker(1, 0, 0, 0, 1, 0, 0, 0, 1),
    Vector3d(0, 0, -0.3));
const FloatType simple_humanoid::Node22::mass = 2.5;
const Spatial::Inertia simple_humanoid::Node22::I = spatialInertiaMaker(
    2.5,
    Vector3d(-0.15, 0, 0),
    matrix3dMaker(1, 0, 0, 0, 1, 0, 0, 0, 1));

simple_humanoid::Node22::Node22():
  joint(0, 1, 0) {}

const std::string simple_humanoid::Node23::joint_name = std::string("LLEG_ANKLE_R");
const std::string simple_humanoid::Node23::body_name = std::string("LLEG_LINK6");
const Spatial::Transform simple_humanoid::Node23::Xt = Spatial::Transform(
    matrix3dMaker(1, 0, 0, 0, 1, 0, 0, 0, 1),
    Vector3d(0, 0, 0));
const FloatType simple_humanoid::Node23::mass = 1.9;
const Spatial::Inertia simple_humanoid::Node23::I = spatialInertiaMaker(
    1.9,
    Vector3d(0.28, 0, -0.2),
    matrix3dMaker(1, 0, 0, 0, 1, 0, 0, 0, 1));

simple_humanoid::Node23::Node23():
  joint() {}

const std::string simple_humanoid::Node24::joint_name = std::string("RLEG_HIP_R");
const std::string simple_humanoid::Node24::body_name = std::string("RLEG_LINK1");
const Spatial::Transform simple_humanoid::Node24::Xt = Spatial::Transform(
    matrix3dMaker(1, 0, 0, 0, 1, 0, 0, 0, 1),
    Vector3d(0, -0.09, 0));
const FloatType simple_humanoid::Node24::mass = 2.5;
const Spatial::Inertia simple_humanoid::Node24::I = spatialInertiaMaker(
    2.5,
    Vector3d(0, -0.1, 0),
    matrix3dMaker(1, 0, 0, 0, 1, 0, 0, 0, 1));

simple_humanoid::Node24::Node24():
  joint() {}

const std::string simple_humanoid::Node25::joint_name = std::string("RLEG_HIP_P");
const std::string simple_humanoid::Node25::body_name = std::string("RLEG_LINK2");
const Spatial::Transform simple_humanoid::Node25::Xt = Spatial::Transform(
    matrix3dMaker(1, 0, 0, 0, 1, 0, 0, 0, 1),
    Vector3d(0, 0, 0));
const FloatType simple_humanoid::Node25::mass = 2;
const Spatial::Inertia simple_humanoid::Node25::I = spatialInertiaMaker(
    2,
    Vector3d(0, 0, -0.15),
    matrix3dMaker(1, 0, 0, 0, 1, 0, 0, 0, 1));

simple_humanoid::Node25::Node25():
  joint(0, 1, 0) {}

const std::string simple_humanoid::Node26::joint_name = std::string("RLEG_HIP_Y");
const std::string simple_humanoid::Node26::body_name = std::string("RLEG_LINK3");
const Spatial::Transform simple_humanoid::Node26::Xt = Spatial::Transform(
    matrix3dMaker(1, 0, 0, 0, 1, 0, 0, 0, 1),
    Vector3d(0, 0, -0.3535));
const FloatType simple_humanoid::Node26::mass = 5.1;
const Spatial::Inertia simple_humanoid::Node26::I = spatialInertiaMaker(
    5.1,
    Vector3d(0, -0.04, 0),
    matrix3dMaker(1, 0, 0, 0, 1, 0, 0, 0, 1));

simple_humanoid::Node26::Node26():
  joint(0, 0, 1) {}

const std::string simple_humanoid::Node27::joint_name = std::string("RLEG_KNEE");
const std::string simple_humanoid::Node27::body_name = std::string("RLEG_LINK4");
const Spatial::Transform simple_humanoid::Node27::Xt = Spatial::Transform(
    matrix3dMaker(1, 0, 0, 0, 1, 0, 0, 0, 1),
    Vector3d(0, 0, 0));
const FloatType simple_humanoid::Node27::mass = 7;
const Spatial::Inertia simple_humanoid::Node27::I = spatialInertiaMaker(
    7,
    Vector3d(0, 0, -0.3),
    matrix3dMaker(1, 0, 0, 0, 1, 0, 0, 0, 1));

simple_humanoid::Node27::Node27():
  joint(0, 1, 0) {}

const std::string simple_humanoid::Node28::joint_name = std::string("RLEG_ANKLE_P");
const std::string simple_humanoid::Node28::body_name = std::string("RLEG_LINK5");
const Spatial::Transform simple_humanoid::Node28::Xt = Spatial::Transform(
    matrix3dMaker(1, 0, 0, 0, 1, 0, 0, 0, 1),
    Vector3d(0, 0, -0.3));
const FloatType simple_humanoid::Node28::mass = 2.5;
const Spatial::Inertia simple_humanoid::Node28::I = spatialInertiaMaker(
    2.5,
    Vector3d(-0.15, 0, 0),
    matrix3dMaker(1, 0, 0, 0, 1, 0, 0, 0, 1));

simple_humanoid::Node28::Node28():
  joint(0, 1, 0) {}

const std::string simple_humanoid::Node29::joint_name = std::string("RLEG_ANKLE_R");
const std::string simple_humanoid::Node29::body_name = std::string("RLEG_LINK6");
const Spatial::Transform simple_humanoid::Node29::Xt = Spatial::Transform(
    matrix3dMaker(1, 0, 0, 0, 1, 0, 0, 0, 1),
    Vector3d(0, 0, 0));
const FloatType simple_humanoid::Node29::mass = 1.9;
const Spatial::Inertia simple_humanoid::Node29::I = spatialInertiaMaker(
    1.9,
    Vector3d(0.28, 0, -0.2),
    matrix3dMaker(1, 0, 0, 0, 1, 0, 0, 0, 1));

simple_humanoid::Node29::Node29():
  joint() {}



}
