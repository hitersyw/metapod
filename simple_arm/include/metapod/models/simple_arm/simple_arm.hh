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

#ifndef METAPOD_SIMPLE_ARM_INIT_HH
# define METAPOD_SIMPLE_ARM_INIT_HH

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
# if !defined(FUSION_MAX_VECTOR_SIZE) && (3 > 10)
#  define FUSION_MAX_VECTOR_SIZE 3
# endif
# if defined(FUSION_MAX_VECTOR_SIZE) && (3 > FUSION_MAX_VECTOR_SIZE)
// todo: warn or stop
#endif
# include <boost/fusion/sequence.hpp>
# include <boost/fusion/include/sequence.hpp>
# include <boost/fusion/include/vector.hpp>

namespace metapod {

class METAPOD_SIMPLE_ARM_DLLAPI simple_arm {
public:
  // Global constants or variable of the robot
  enum { NBDOF = 3 };
  enum { NBBODIES = 3 };

  typedef Eigen::Matrix< FloatType, NBDOF, 1 > confVector;

  enum NodeId
  {
    ARM = 0,
    FOREARM = 1,
    HAND = 2
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
    typedef RevoluteAxisXJoint Joint;
    static const int parent_id = -1;
    static const int child0_id = 1;
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

  class Node1 {
  public:
    Node1();
    static const int id = 1;
    static const std::string joint_name;
    static const std::string body_name;
    static const Spatial::Transform Xt;
    static const int q_idx = 1;
    typedef RevoluteAxisXJoint Joint;
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
    static const int q_idx = 2;
    typedef RevoluteAxisXJoint Joint;
    static const int parent_id = 1;
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
  typedef boost::fusion::vector3<
      Node0,
      Node1,
      Node2>
  NodeVector;

  // member variables
 NodeVector nodes;
 Eigen::Matrix< FloatType, NBDOF, NBDOF > H; // used by crba
};

// map node id to node type
template <> struct Nodes <simple_arm, 0> {typedef simple_arm::Node0 type;};
template <> struct Nodes <simple_arm, 1> {typedef simple_arm::Node1 type;};
template <> struct Nodes <simple_arm, 2> {typedef simple_arm::Node2 type;};


} // closing namespace metapod

# ifdef _MSC_VER
#  pragma warning( pop )
# endif

#endif

