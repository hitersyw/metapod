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

#ifndef METAPOD_SIMPLE_HUMANOID_INIT_HH
# define METAPOD_SIMPLE_HUMANOID_INIT_HH

# ifdef _MSC_VER
#  pragma warning( push )
// disable warning C4251: need to have DLL interface
// disable warning C4099: struct/class discrepancies
#  pragma warning( disable: 4251 4099 )
# endif

# include "config.hh"

# include <metapod/tools/common.hh>
# include <metapod/tools/joint.hh>

// by default, boost fusion vector only provides constructor for vectors with
// up to 10 elements.
# if !defined(FUSION_MAX_VECTOR_SIZE) && (30 > 10)
#  define FUSION_MAX_VECTOR_SIZE 30
# endif
# if defined(FUSION_MAX_VECTOR_SIZE) && (30 > FUSION_MAX_VECTOR_SIZE)
// todo: warn or stop
#endif
# include <boost/fusion/sequence.hpp>
# include <boost/fusion/include/sequence.hpp>
# include <boost/fusion/include/vector.hpp>

namespace metapod {

class METAPOD_SIMPLE_HUMANOID_DLLAPI simple_humanoid {
public:
  // Global constants or variable of the robot
  enum { NBDOF = 35 };
  enum { NBBODIES = 30 };

  typedef Eigen::Matrix< FloatType, NBDOF, 1 > confVector;

  enum NodeId
  {
    WAIST_LINK0 = 0,
    WAIST_LINK1 = 1,
    WAIST_LINK2 = 2,
    WAIST_LINK3 = 3,
    LARM_LINK1 = 4,
    LARM_LINK2 = 5,
    LARM_LINK3 = 6,
    LARM_LINK4 = 7,
    LARM_LINK5 = 8,
    LARM_LINK6 = 9,
    LARM_LINK7 = 10,
    RARM_LINK1 = 11,
    RARM_LINK2 = 12,
    RARM_LINK3 = 13,
    RARM_LINK4 = 14,
    RARM_LINK5 = 15,
    RARM_LINK6 = 16,
    RARM_LINK7 = 17,
    LLEG_LINK1 = 18,
    LLEG_LINK2 = 19,
    LLEG_LINK3 = 20,
    LLEG_LINK4 = 21,
    LLEG_LINK5 = 22,
    LLEG_LINK6 = 23,
    RLEG_LINK1 = 24,
    RLEG_LINK2 = 25,
    RLEG_LINK3 = 26,
    RLEG_LINK4 = 27,
    RLEG_LINK5 = 28,
    RLEG_LINK6 = 29
  };

  // children of the root/NP node
  static const int child0_id = 0;
  static const int child1_id = -2;
  static const int child2_id = -2;
  static const int child3_id = -2;
  static const int child4_id = -2;

  // definition of the node classes (except the root/NP node)

  class Node0 {
  public:
    Node0();
    static const int id = 0;
    static const std::string joint_name;
    static const std::string body_name;
    static const Spatial::Transform Xt;
    static const int q_idx = 0;
    typedef FreeFlyerJoint Joint;
    static const int parent_id = -1;
    static const int child0_id = 1;
    static const int child1_id = 18;
    static const int child2_id = 24;
    static const int child3_id = -2;
    static const int child4_id = -2;
    static const FloatType mass;
    static const Spatial::Inertia I; // in body frame
    Spatial::Transform sXp;
    Eigen::Matrix<FloatType, 6, Joint::NBDOF> joint_F; // used by crba
    Joint joint;
    Body body;
  };

  class Node1 {
  public:
    Node1();
    static const int id = 1;
    static const std::string joint_name;
    static const std::string body_name;
    static const Spatial::Transform Xt;
    static const int q_idx = 32;
    typedef RevoluteAxisAnyJoint Joint;
    static const int parent_id = 0;
    static const int child0_id = 2;
    static const int child1_id = -2;
    static const int child2_id = -2;
    static const int child3_id = -2;
    static const int child4_id = -2;
    static const FloatType mass;
    static const Spatial::Inertia I; // in body frame
    Spatial::Transform sXp;
    Eigen::Matrix<FloatType, 6, Joint::NBDOF> joint_F; // used by crba
    Joint joint;
    Body body;
  };

  class Node2 {
  public:
    Node2();
    static const int id = 2;
    static const std::string joint_name;
    static const std::string body_name;
    static const Spatial::Transform Xt;
    static const int q_idx = 33;
    typedef RevoluteAxisXJoint Joint;
    static const int parent_id = 1;
    static const int child0_id = 3;
    static const int child1_id = -2;
    static const int child2_id = -2;
    static const int child3_id = -2;
    static const int child4_id = -2;
    static const FloatType mass;
    static const Spatial::Inertia I; // in body frame
    Spatial::Transform sXp;
    Eigen::Matrix<FloatType, 6, Joint::NBDOF> joint_F; // used by crba
    Joint joint;
    Body body;
  };

  class Node3 {
  public:
    Node3();
    static const int id = 3;
    static const std::string joint_name;
    static const std::string body_name;
    static const Spatial::Transform Xt;
    static const int q_idx = 34;
    typedef RevoluteAxisAnyJoint Joint;
    static const int parent_id = 2;
    static const int child0_id = 4;
    static const int child1_id = 11;
    static const int child2_id = -2;
    static const int child3_id = -2;
    static const int child4_id = -2;
    static const FloatType mass;
    static const Spatial::Inertia I; // in body frame
    Spatial::Transform sXp;
    Eigen::Matrix<FloatType, 6, Joint::NBDOF> joint_F; // used by crba
    Joint joint;
    Body body;
  };

  class Node4 {
  public:
    Node4();
    static const int id = 4;
    static const std::string joint_name;
    static const std::string body_name;
    static const Spatial::Transform Xt;
    static const int q_idx = 25;
    typedef RevoluteAxisAnyJoint Joint;
    static const int parent_id = 3;
    static const int child0_id = 5;
    static const int child1_id = -2;
    static const int child2_id = -2;
    static const int child3_id = -2;
    static const int child4_id = -2;
    static const FloatType mass;
    static const Spatial::Inertia I; // in body frame
    Spatial::Transform sXp;
    Eigen::Matrix<FloatType, 6, Joint::NBDOF> joint_F; // used by crba
    Joint joint;
    Body body;
  };

  class Node5 {
  public:
    Node5();
    static const int id = 5;
    static const std::string joint_name;
    static const std::string body_name;
    static const Spatial::Transform Xt;
    static const int q_idx = 26;
    typedef RevoluteAxisXJoint Joint;
    static const int parent_id = 4;
    static const int child0_id = 6;
    static const int child1_id = -2;
    static const int child2_id = -2;
    static const int child3_id = -2;
    static const int child4_id = -2;
    static const FloatType mass;
    static const Spatial::Inertia I; // in body frame
    Spatial::Transform sXp;
    Eigen::Matrix<FloatType, 6, Joint::NBDOF> joint_F; // used by crba
    Joint joint;
    Body body;
  };

  class Node6 {
  public:
    Node6();
    static const int id = 6;
    static const std::string joint_name;
    static const std::string body_name;
    static const Spatial::Transform Xt;
    static const int q_idx = 27;
    typedef RevoluteAxisAnyJoint Joint;
    static const int parent_id = 5;
    static const int child0_id = 7;
    static const int child1_id = -2;
    static const int child2_id = -2;
    static const int child3_id = -2;
    static const int child4_id = -2;
    static const FloatType mass;
    static const Spatial::Inertia I; // in body frame
    Spatial::Transform sXp;
    Eigen::Matrix<FloatType, 6, Joint::NBDOF> joint_F; // used by crba
    Joint joint;
    Body body;
  };

  class Node7 {
  public:
    Node7();
    static const int id = 7;
    static const std::string joint_name;
    static const std::string body_name;
    static const Spatial::Transform Xt;
    static const int q_idx = 28;
    typedef RevoluteAxisAnyJoint Joint;
    static const int parent_id = 6;
    static const int child0_id = 8;
    static const int child1_id = -2;
    static const int child2_id = -2;
    static const int child3_id = -2;
    static const int child4_id = -2;
    static const FloatType mass;
    static const Spatial::Inertia I; // in body frame
    Spatial::Transform sXp;
    Eigen::Matrix<FloatType, 6, Joint::NBDOF> joint_F; // used by crba
    Joint joint;
    Body body;
  };

  class Node8 {
  public:
    Node8();
    static const int id = 8;
    static const std::string joint_name;
    static const std::string body_name;
    static const Spatial::Transform Xt;
    static const int q_idx = 29;
    typedef RevoluteAxisAnyJoint Joint;
    static const int parent_id = 7;
    static const int child0_id = 9;
    static const int child1_id = -2;
    static const int child2_id = -2;
    static const int child3_id = -2;
    static const int child4_id = -2;
    static const FloatType mass;
    static const Spatial::Inertia I; // in body frame
    Spatial::Transform sXp;
    Eigen::Matrix<FloatType, 6, Joint::NBDOF> joint_F; // used by crba
    Joint joint;
    Body body;
  };

  class Node9 {
  public:
    Node9();
    static const int id = 9;
    static const std::string joint_name;
    static const std::string body_name;
    static const Spatial::Transform Xt;
    static const int q_idx = 30;
    typedef RevoluteAxisAnyJoint Joint;
    static const int parent_id = 8;
    static const int child0_id = 10;
    static const int child1_id = -2;
    static const int child2_id = -2;
    static const int child3_id = -2;
    static const int child4_id = -2;
    static const FloatType mass;
    static const Spatial::Inertia I; // in body frame
    Spatial::Transform sXp;
    Eigen::Matrix<FloatType, 6, Joint::NBDOF> joint_F; // used by crba
    Joint joint;
    Body body;
  };

  class Node10 {
  public:
    Node10();
    static const int id = 10;
    static const std::string joint_name;
    static const std::string body_name;
    static const Spatial::Transform Xt;
    static const int q_idx = 31;
    typedef RevoluteAxisXJoint Joint;
    static const int parent_id = 9;
    static const int child0_id = -2;
    static const int child1_id = -2;
    static const int child2_id = -2;
    static const int child3_id = -2;
    static const int child4_id = -2;
    static const FloatType mass;
    static const Spatial::Inertia I; // in body frame
    Spatial::Transform sXp;
    Eigen::Matrix<FloatType, 6, Joint::NBDOF> joint_F; // used by crba
    Joint joint;
    Body body;
  };

  class Node11 {
  public:
    Node11();
    static const int id = 11;
    static const std::string joint_name;
    static const std::string body_name;
    static const Spatial::Transform Xt;
    static const int q_idx = 12;
    typedef RevoluteAxisAnyJoint Joint;
    static const int parent_id = 3;
    static const int child0_id = 12;
    static const int child1_id = -2;
    static const int child2_id = -2;
    static const int child3_id = -2;
    static const int child4_id = -2;
    static const FloatType mass;
    static const Spatial::Inertia I; // in body frame
    Spatial::Transform sXp;
    Eigen::Matrix<FloatType, 6, Joint::NBDOF> joint_F; // used by crba
    Joint joint;
    Body body;
  };

  class Node12 {
  public:
    Node12();
    static const int id = 12;
    static const std::string joint_name;
    static const std::string body_name;
    static const Spatial::Transform Xt;
    static const int q_idx = 13;
    typedef RevoluteAxisXJoint Joint;
    static const int parent_id = 11;
    static const int child0_id = 13;
    static const int child1_id = -2;
    static const int child2_id = -2;
    static const int child3_id = -2;
    static const int child4_id = -2;
    static const FloatType mass;
    static const Spatial::Inertia I; // in body frame
    Spatial::Transform sXp;
    Eigen::Matrix<FloatType, 6, Joint::NBDOF> joint_F; // used by crba
    Joint joint;
    Body body;
  };

  class Node13 {
  public:
    Node13();
    static const int id = 13;
    static const std::string joint_name;
    static const std::string body_name;
    static const Spatial::Transform Xt;
    static const int q_idx = 14;
    typedef RevoluteAxisAnyJoint Joint;
    static const int parent_id = 12;
    static const int child0_id = 14;
    static const int child1_id = -2;
    static const int child2_id = -2;
    static const int child3_id = -2;
    static const int child4_id = -2;
    static const FloatType mass;
    static const Spatial::Inertia I; // in body frame
    Spatial::Transform sXp;
    Eigen::Matrix<FloatType, 6, Joint::NBDOF> joint_F; // used by crba
    Joint joint;
    Body body;
  };

  class Node14 {
  public:
    Node14();
    static const int id = 14;
    static const std::string joint_name;
    static const std::string body_name;
    static const Spatial::Transform Xt;
    static const int q_idx = 15;
    typedef RevoluteAxisAnyJoint Joint;
    static const int parent_id = 13;
    static const int child0_id = 15;
    static const int child1_id = -2;
    static const int child2_id = -2;
    static const int child3_id = -2;
    static const int child4_id = -2;
    static const FloatType mass;
    static const Spatial::Inertia I; // in body frame
    Spatial::Transform sXp;
    Eigen::Matrix<FloatType, 6, Joint::NBDOF> joint_F; // used by crba
    Joint joint;
    Body body;
  };

  class Node15 {
  public:
    Node15();
    static const int id = 15;
    static const std::string joint_name;
    static const std::string body_name;
    static const Spatial::Transform Xt;
    static const int q_idx = 16;
    typedef RevoluteAxisAnyJoint Joint;
    static const int parent_id = 14;
    static const int child0_id = 16;
    static const int child1_id = -2;
    static const int child2_id = -2;
    static const int child3_id = -2;
    static const int child4_id = -2;
    static const FloatType mass;
    static const Spatial::Inertia I; // in body frame
    Spatial::Transform sXp;
    Eigen::Matrix<FloatType, 6, Joint::NBDOF> joint_F; // used by crba
    Joint joint;
    Body body;
  };

  class Node16 {
  public:
    Node16();
    static const int id = 16;
    static const std::string joint_name;
    static const std::string body_name;
    static const Spatial::Transform Xt;
    static const int q_idx = 17;
    typedef RevoluteAxisAnyJoint Joint;
    static const int parent_id = 15;
    static const int child0_id = 17;
    static const int child1_id = -2;
    static const int child2_id = -2;
    static const int child3_id = -2;
    static const int child4_id = -2;
    static const FloatType mass;
    static const Spatial::Inertia I; // in body frame
    Spatial::Transform sXp;
    Eigen::Matrix<FloatType, 6, Joint::NBDOF> joint_F; // used by crba
    Joint joint;
    Body body;
  };

  class Node17 {
  public:
    Node17();
    static const int id = 17;
    static const std::string joint_name;
    static const std::string body_name;
    static const Spatial::Transform Xt;
    static const int q_idx = 18;
    typedef RevoluteAxisXJoint Joint;
    static const int parent_id = 16;
    static const int child0_id = -2;
    static const int child1_id = -2;
    static const int child2_id = -2;
    static const int child3_id = -2;
    static const int child4_id = -2;
    static const FloatType mass;
    static const Spatial::Inertia I; // in body frame
    Spatial::Transform sXp;
    Eigen::Matrix<FloatType, 6, Joint::NBDOF> joint_F; // used by crba
    Joint joint;
    Body body;
  };

  class Node18 {
  public:
    Node18();
    static const int id = 18;
    static const std::string joint_name;
    static const std::string body_name;
    static const Spatial::Transform Xt;
    static const int q_idx = 19;
    typedef RevoluteAxisXJoint Joint;
    static const int parent_id = 0;
    static const int child0_id = 19;
    static const int child1_id = -2;
    static const int child2_id = -2;
    static const int child3_id = -2;
    static const int child4_id = -2;
    static const FloatType mass;
    static const Spatial::Inertia I; // in body frame
    Spatial::Transform sXp;
    Eigen::Matrix<FloatType, 6, Joint::NBDOF> joint_F; // used by crba
    Joint joint;
    Body body;
  };

  class Node19 {
  public:
    Node19();
    static const int id = 19;
    static const std::string joint_name;
    static const std::string body_name;
    static const Spatial::Transform Xt;
    static const int q_idx = 20;
    typedef RevoluteAxisAnyJoint Joint;
    static const int parent_id = 18;
    static const int child0_id = 20;
    static const int child1_id = -2;
    static const int child2_id = -2;
    static const int child3_id = -2;
    static const int child4_id = -2;
    static const FloatType mass;
    static const Spatial::Inertia I; // in body frame
    Spatial::Transform sXp;
    Eigen::Matrix<FloatType, 6, Joint::NBDOF> joint_F; // used by crba
    Joint joint;
    Body body;
  };

  class Node20 {
  public:
    Node20();
    static const int id = 20;
    static const std::string joint_name;
    static const std::string body_name;
    static const Spatial::Transform Xt;
    static const int q_idx = 21;
    typedef RevoluteAxisAnyJoint Joint;
    static const int parent_id = 19;
    static const int child0_id = 21;
    static const int child1_id = -2;
    static const int child2_id = -2;
    static const int child3_id = -2;
    static const int child4_id = -2;
    static const FloatType mass;
    static const Spatial::Inertia I; // in body frame
    Spatial::Transform sXp;
    Eigen::Matrix<FloatType, 6, Joint::NBDOF> joint_F; // used by crba
    Joint joint;
    Body body;
  };

  class Node21 {
  public:
    Node21();
    static const int id = 21;
    static const std::string joint_name;
    static const std::string body_name;
    static const Spatial::Transform Xt;
    static const int q_idx = 22;
    typedef RevoluteAxisAnyJoint Joint;
    static const int parent_id = 20;
    static const int child0_id = 22;
    static const int child1_id = -2;
    static const int child2_id = -2;
    static const int child3_id = -2;
    static const int child4_id = -2;
    static const FloatType mass;
    static const Spatial::Inertia I; // in body frame
    Spatial::Transform sXp;
    Eigen::Matrix<FloatType, 6, Joint::NBDOF> joint_F; // used by crba
    Joint joint;
    Body body;
  };

  class Node22 {
  public:
    Node22();
    static const int id = 22;
    static const std::string joint_name;
    static const std::string body_name;
    static const Spatial::Transform Xt;
    static const int q_idx = 23;
    typedef RevoluteAxisAnyJoint Joint;
    static const int parent_id = 21;
    static const int child0_id = 23;
    static const int child1_id = -2;
    static const int child2_id = -2;
    static const int child3_id = -2;
    static const int child4_id = -2;
    static const FloatType mass;
    static const Spatial::Inertia I; // in body frame
    Spatial::Transform sXp;
    Eigen::Matrix<FloatType, 6, Joint::NBDOF> joint_F; // used by crba
    Joint joint;
    Body body;
  };

  class Node23 {
  public:
    Node23();
    static const int id = 23;
    static const std::string joint_name;
    static const std::string body_name;
    static const Spatial::Transform Xt;
    static const int q_idx = 24;
    typedef RevoluteAxisXJoint Joint;
    static const int parent_id = 22;
    static const int child0_id = -2;
    static const int child1_id = -2;
    static const int child2_id = -2;
    static const int child3_id = -2;
    static const int child4_id = -2;
    static const FloatType mass;
    static const Spatial::Inertia I; // in body frame
    Spatial::Transform sXp;
    Eigen::Matrix<FloatType, 6, Joint::NBDOF> joint_F; // used by crba
    Joint joint;
    Body body;
  };

  class Node24 {
  public:
    Node24();
    static const int id = 24;
    static const std::string joint_name;
    static const std::string body_name;
    static const Spatial::Transform Xt;
    static const int q_idx = 6;
    typedef RevoluteAxisXJoint Joint;
    static const int parent_id = 0;
    static const int child0_id = 25;
    static const int child1_id = -2;
    static const int child2_id = -2;
    static const int child3_id = -2;
    static const int child4_id = -2;
    static const FloatType mass;
    static const Spatial::Inertia I; // in body frame
    Spatial::Transform sXp;
    Eigen::Matrix<FloatType, 6, Joint::NBDOF> joint_F; // used by crba
    Joint joint;
    Body body;
  };

  class Node25 {
  public:
    Node25();
    static const int id = 25;
    static const std::string joint_name;
    static const std::string body_name;
    static const Spatial::Transform Xt;
    static const int q_idx = 7;
    typedef RevoluteAxisAnyJoint Joint;
    static const int parent_id = 24;
    static const int child0_id = 26;
    static const int child1_id = -2;
    static const int child2_id = -2;
    static const int child3_id = -2;
    static const int child4_id = -2;
    static const FloatType mass;
    static const Spatial::Inertia I; // in body frame
    Spatial::Transform sXp;
    Eigen::Matrix<FloatType, 6, Joint::NBDOF> joint_F; // used by crba
    Joint joint;
    Body body;
  };

  class Node26 {
  public:
    Node26();
    static const int id = 26;
    static const std::string joint_name;
    static const std::string body_name;
    static const Spatial::Transform Xt;
    static const int q_idx = 8;
    typedef RevoluteAxisAnyJoint Joint;
    static const int parent_id = 25;
    static const int child0_id = 27;
    static const int child1_id = -2;
    static const int child2_id = -2;
    static const int child3_id = -2;
    static const int child4_id = -2;
    static const FloatType mass;
    static const Spatial::Inertia I; // in body frame
    Spatial::Transform sXp;
    Eigen::Matrix<FloatType, 6, Joint::NBDOF> joint_F; // used by crba
    Joint joint;
    Body body;
  };

  class Node27 {
  public:
    Node27();
    static const int id = 27;
    static const std::string joint_name;
    static const std::string body_name;
    static const Spatial::Transform Xt;
    static const int q_idx = 9;
    typedef RevoluteAxisAnyJoint Joint;
    static const int parent_id = 26;
    static const int child0_id = 28;
    static const int child1_id = -2;
    static const int child2_id = -2;
    static const int child3_id = -2;
    static const int child4_id = -2;
    static const FloatType mass;
    static const Spatial::Inertia I; // in body frame
    Spatial::Transform sXp;
    Eigen::Matrix<FloatType, 6, Joint::NBDOF> joint_F; // used by crba
    Joint joint;
    Body body;
  };

  class Node28 {
  public:
    Node28();
    static const int id = 28;
    static const std::string joint_name;
    static const std::string body_name;
    static const Spatial::Transform Xt;
    static const int q_idx = 10;
    typedef RevoluteAxisAnyJoint Joint;
    static const int parent_id = 27;
    static const int child0_id = 29;
    static const int child1_id = -2;
    static const int child2_id = -2;
    static const int child3_id = -2;
    static const int child4_id = -2;
    static const FloatType mass;
    static const Spatial::Inertia I; // in body frame
    Spatial::Transform sXp;
    Eigen::Matrix<FloatType, 6, Joint::NBDOF> joint_F; // used by crba
    Joint joint;
    Body body;
  };

  class Node29 {
  public:
    Node29();
    static const int id = 29;
    static const std::string joint_name;
    static const std::string body_name;
    static const Spatial::Transform Xt;
    static const int q_idx = 11;
    typedef RevoluteAxisXJoint Joint;
    static const int parent_id = 28;
    static const int child0_id = -2;
    static const int child1_id = -2;
    static const int child2_id = -2;
    static const int child3_id = -2;
    static const int child4_id = -2;
    static const FloatType mass;
    static const Spatial::Inertia I; // in body frame
    Spatial::Transform sXp;
    Eigen::Matrix<FloatType, 6, Joint::NBDOF> joint_F; // used by crba
    Joint joint;
    Body body;
  };


  // vector of the robot nodes
  typedef boost::fusion::vector30<
      Node0,
      Node1,
      Node2,
      Node3,
      Node4,
      Node5,
      Node6,
      Node7,
      Node8,
      Node9,
      Node10,
      Node11,
      Node12,
      Node13,
      Node14,
      Node15,
      Node16,
      Node17,
      Node18,
      Node19,
      Node20,
      Node21,
      Node22,
      Node23,
      Node24,
      Node25,
      Node26,
      Node27,
      Node28,
      Node29>
  NodeVector;

  // member variables
 NodeVector nodes;
 Eigen::Matrix< FloatType, NBDOF, NBDOF > H; // used by crba
};

// map node id to node type
template <> struct Nodes <simple_humanoid, 0> {typedef simple_humanoid::Node0 type;};
template <> struct Nodes <simple_humanoid, 1> {typedef simple_humanoid::Node1 type;};
template <> struct Nodes <simple_humanoid, 2> {typedef simple_humanoid::Node2 type;};
template <> struct Nodes <simple_humanoid, 3> {typedef simple_humanoid::Node3 type;};
template <> struct Nodes <simple_humanoid, 4> {typedef simple_humanoid::Node4 type;};
template <> struct Nodes <simple_humanoid, 5> {typedef simple_humanoid::Node5 type;};
template <> struct Nodes <simple_humanoid, 6> {typedef simple_humanoid::Node6 type;};
template <> struct Nodes <simple_humanoid, 7> {typedef simple_humanoid::Node7 type;};
template <> struct Nodes <simple_humanoid, 8> {typedef simple_humanoid::Node8 type;};
template <> struct Nodes <simple_humanoid, 9> {typedef simple_humanoid::Node9 type;};
template <> struct Nodes <simple_humanoid, 10> {typedef simple_humanoid::Node10 type;};
template <> struct Nodes <simple_humanoid, 11> {typedef simple_humanoid::Node11 type;};
template <> struct Nodes <simple_humanoid, 12> {typedef simple_humanoid::Node12 type;};
template <> struct Nodes <simple_humanoid, 13> {typedef simple_humanoid::Node13 type;};
template <> struct Nodes <simple_humanoid, 14> {typedef simple_humanoid::Node14 type;};
template <> struct Nodes <simple_humanoid, 15> {typedef simple_humanoid::Node15 type;};
template <> struct Nodes <simple_humanoid, 16> {typedef simple_humanoid::Node16 type;};
template <> struct Nodes <simple_humanoid, 17> {typedef simple_humanoid::Node17 type;};
template <> struct Nodes <simple_humanoid, 18> {typedef simple_humanoid::Node18 type;};
template <> struct Nodes <simple_humanoid, 19> {typedef simple_humanoid::Node19 type;};
template <> struct Nodes <simple_humanoid, 20> {typedef simple_humanoid::Node20 type;};
template <> struct Nodes <simple_humanoid, 21> {typedef simple_humanoid::Node21 type;};
template <> struct Nodes <simple_humanoid, 22> {typedef simple_humanoid::Node22 type;};
template <> struct Nodes <simple_humanoid, 23> {typedef simple_humanoid::Node23 type;};
template <> struct Nodes <simple_humanoid, 24> {typedef simple_humanoid::Node24 type;};
template <> struct Nodes <simple_humanoid, 25> {typedef simple_humanoid::Node25 type;};
template <> struct Nodes <simple_humanoid, 26> {typedef simple_humanoid::Node26 type;};
template <> struct Nodes <simple_humanoid, 27> {typedef simple_humanoid::Node27 type;};
template <> struct Nodes <simple_humanoid, 28> {typedef simple_humanoid::Node28 type;};
template <> struct Nodes <simple_humanoid, 29> {typedef simple_humanoid::Node29 type;};


} // closing namespace metapod

# ifdef _MSC_VER
#  pragma warning( pop )
# endif

#endif

