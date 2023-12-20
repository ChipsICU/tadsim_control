// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: location.proto

#ifndef PROTOBUF_INCLUDED_location_2eproto
#define PROTOBUF_INCLUDED_location_2eproto

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3006001
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "basic.pb.h"
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_location_2eproto 

namespace protobuf_location_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[2];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
}  // namespace protobuf_location_2eproto
namespace sim_msg {
class Location;
class LocationDefaultTypeInternal;
extern LocationDefaultTypeInternal _Location_default_instance_;
class Location_EgoLane;
class Location_EgoLaneDefaultTypeInternal;
extern Location_EgoLaneDefaultTypeInternal _Location_EgoLane_default_instance_;
}  // namespace sim_msg
namespace google {
namespace protobuf {
template<> ::sim_msg::Location* Arena::CreateMaybeMessage<::sim_msg::Location>(Arena*);
template<> ::sim_msg::Location_EgoLane* Arena::CreateMaybeMessage<::sim_msg::Location_EgoLane>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace sim_msg {

// ===================================================================

class Location_EgoLane : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:sim_msg.Location.EgoLane) */ {
 public:
  Location_EgoLane();
  virtual ~Location_EgoLane();

  Location_EgoLane(const Location_EgoLane& from);

  inline Location_EgoLane& operator=(const Location_EgoLane& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Location_EgoLane(Location_EgoLane&& from) noexcept
    : Location_EgoLane() {
    *this = ::std::move(from);
  }

  inline Location_EgoLane& operator=(Location_EgoLane&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const Location_EgoLane& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Location_EgoLane* internal_default_instance() {
    return reinterpret_cast<const Location_EgoLane*>(
               &_Location_EgoLane_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(Location_EgoLane* other);
  friend void swap(Location_EgoLane& a, Location_EgoLane& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Location_EgoLane* New() const final {
    return CreateMaybeMessage<Location_EgoLane>(NULL);
  }

  Location_EgoLane* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Location_EgoLane>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Location_EgoLane& from);
  void MergeFrom(const Location_EgoLane& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Location_EgoLane* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // int64 lanepkid = 1;
  void clear_lanepkid();
  static const int kLanepkidFieldNumber = 1;
  ::google::protobuf::int64 lanepkid() const;
  void set_lanepkid(::google::protobuf::int64 value);

  // uint64 sectionpkid = 2;
  void clear_sectionpkid();
  static const int kSectionpkidFieldNumber = 2;
  ::google::protobuf::uint64 sectionpkid() const;
  void set_sectionpkid(::google::protobuf::uint64 value);

  // uint64 roadpkid = 3;
  void clear_roadpkid();
  static const int kRoadpkidFieldNumber = 3;
  ::google::protobuf::uint64 roadpkid() const;
  void set_roadpkid(::google::protobuf::uint64 value);

  // double dist_2_ref_line = 4;
  void clear_dist_2_ref_line();
  static const int kDist2RefLineFieldNumber = 4;
  double dist_2_ref_line() const;
  void set_dist_2_ref_line(double value);

  // @@protoc_insertion_point(class_scope:sim_msg.Location.EgoLane)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::int64 lanepkid_;
  ::google::protobuf::uint64 sectionpkid_;
  ::google::protobuf::uint64 roadpkid_;
  double dist_2_ref_line_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_location_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class Location : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:sim_msg.Location) */ {
 public:
  Location();
  virtual ~Location();

  Location(const Location& from);

  inline Location& operator=(const Location& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Location(Location&& from) noexcept
    : Location() {
    *this = ::std::move(from);
  }

  inline Location& operator=(Location&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const Location& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Location* internal_default_instance() {
    return reinterpret_cast<const Location*>(
               &_Location_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(Location* other);
  friend void swap(Location& a, Location& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Location* New() const final {
    return CreateMaybeMessage<Location>(NULL);
  }

  Location* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Location>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Location& from);
  void MergeFrom(const Location& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Location* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  typedef Location_EgoLane EgoLane;

  // accessors -------------------------------------------------------

  // .sim_msg.Vec3 position = 2;
  bool has_position() const;
  void clear_position();
  static const int kPositionFieldNumber = 2;
  private:
  const ::sim_msg::Vec3& _internal_position() const;
  public:
  const ::sim_msg::Vec3& position() const;
  ::sim_msg::Vec3* release_position();
  ::sim_msg::Vec3* mutable_position();
  void set_allocated_position(::sim_msg::Vec3* position);

  // .sim_msg.Vec3 velocity = 3;
  bool has_velocity() const;
  void clear_velocity();
  static const int kVelocityFieldNumber = 3;
  private:
  const ::sim_msg::Vec3& _internal_velocity() const;
  public:
  const ::sim_msg::Vec3& velocity() const;
  ::sim_msg::Vec3* release_velocity();
  ::sim_msg::Vec3* mutable_velocity();
  void set_allocated_velocity(::sim_msg::Vec3* velocity);

  // .sim_msg.Vec3 angular = 4;
  bool has_angular() const;
  void clear_angular();
  static const int kAngularFieldNumber = 4;
  private:
  const ::sim_msg::Vec3& _internal_angular() const;
  public:
  const ::sim_msg::Vec3& angular() const;
  ::sim_msg::Vec3* release_angular();
  ::sim_msg::Vec3* mutable_angular();
  void set_allocated_angular(::sim_msg::Vec3* angular);

  // .sim_msg.Vec3 rpy = 5;
  bool has_rpy() const;
  void clear_rpy();
  static const int kRpyFieldNumber = 5;
  private:
  const ::sim_msg::Vec3& _internal_rpy() const;
  public:
  const ::sim_msg::Vec3& rpy() const;
  ::sim_msg::Vec3* release_rpy();
  ::sim_msg::Vec3* mutable_rpy();
  void set_allocated_rpy(::sim_msg::Vec3* rpy);

  // .sim_msg.Vec3 acceleration = 6;
  bool has_acceleration() const;
  void clear_acceleration();
  static const int kAccelerationFieldNumber = 6;
  private:
  const ::sim_msg::Vec3& _internal_acceleration() const;
  public:
  const ::sim_msg::Vec3& acceleration() const;
  ::sim_msg::Vec3* release_acceleration();
  ::sim_msg::Vec3* mutable_acceleration();
  void set_allocated_acceleration(::sim_msg::Vec3* acceleration);

  // .sim_msg.Location.EgoLane ego_lane = 7;
  bool has_ego_lane() const;
  void clear_ego_lane();
  static const int kEgoLaneFieldNumber = 7;
  private:
  const ::sim_msg::Location_EgoLane& _internal_ego_lane() const;
  public:
  const ::sim_msg::Location_EgoLane& ego_lane() const;
  ::sim_msg::Location_EgoLane* release_ego_lane();
  ::sim_msg::Location_EgoLane* mutable_ego_lane();
  void set_allocated_ego_lane(::sim_msg::Location_EgoLane* ego_lane);

  // double t = 1;
  void clear_t();
  static const int kTFieldNumber = 1;
  double t() const;
  void set_t(double value);

  // @@protoc_insertion_point(class_scope:sim_msg.Location)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::sim_msg::Vec3* position_;
  ::sim_msg::Vec3* velocity_;
  ::sim_msg::Vec3* angular_;
  ::sim_msg::Vec3* rpy_;
  ::sim_msg::Vec3* acceleration_;
  ::sim_msg::Location_EgoLane* ego_lane_;
  double t_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_location_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Location_EgoLane

// int64 lanepkid = 1;
inline void Location_EgoLane::clear_lanepkid() {
  lanepkid_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 Location_EgoLane::lanepkid() const {
  // @@protoc_insertion_point(field_get:sim_msg.Location.EgoLane.lanepkid)
  return lanepkid_;
}
inline void Location_EgoLane::set_lanepkid(::google::protobuf::int64 value) {
  
  lanepkid_ = value;
  // @@protoc_insertion_point(field_set:sim_msg.Location.EgoLane.lanepkid)
}

// uint64 sectionpkid = 2;
inline void Location_EgoLane::clear_sectionpkid() {
  sectionpkid_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 Location_EgoLane::sectionpkid() const {
  // @@protoc_insertion_point(field_get:sim_msg.Location.EgoLane.sectionpkid)
  return sectionpkid_;
}
inline void Location_EgoLane::set_sectionpkid(::google::protobuf::uint64 value) {
  
  sectionpkid_ = value;
  // @@protoc_insertion_point(field_set:sim_msg.Location.EgoLane.sectionpkid)
}

// uint64 roadpkid = 3;
inline void Location_EgoLane::clear_roadpkid() {
  roadpkid_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 Location_EgoLane::roadpkid() const {
  // @@protoc_insertion_point(field_get:sim_msg.Location.EgoLane.roadpkid)
  return roadpkid_;
}
inline void Location_EgoLane::set_roadpkid(::google::protobuf::uint64 value) {
  
  roadpkid_ = value;
  // @@protoc_insertion_point(field_set:sim_msg.Location.EgoLane.roadpkid)
}

// double dist_2_ref_line = 4;
inline void Location_EgoLane::clear_dist_2_ref_line() {
  dist_2_ref_line_ = 0;
}
inline double Location_EgoLane::dist_2_ref_line() const {
  // @@protoc_insertion_point(field_get:sim_msg.Location.EgoLane.dist_2_ref_line)
  return dist_2_ref_line_;
}
inline void Location_EgoLane::set_dist_2_ref_line(double value) {
  
  dist_2_ref_line_ = value;
  // @@protoc_insertion_point(field_set:sim_msg.Location.EgoLane.dist_2_ref_line)
}

// -------------------------------------------------------------------

// Location

// double t = 1;
inline void Location::clear_t() {
  t_ = 0;
}
inline double Location::t() const {
  // @@protoc_insertion_point(field_get:sim_msg.Location.t)
  return t_;
}
inline void Location::set_t(double value) {
  
  t_ = value;
  // @@protoc_insertion_point(field_set:sim_msg.Location.t)
}

// .sim_msg.Vec3 position = 2;
inline bool Location::has_position() const {
  return this != internal_default_instance() && position_ != NULL;
}
inline const ::sim_msg::Vec3& Location::_internal_position() const {
  return *position_;
}
inline const ::sim_msg::Vec3& Location::position() const {
  const ::sim_msg::Vec3* p = position_;
  // @@protoc_insertion_point(field_get:sim_msg.Location.position)
  return p != NULL ? *p : *reinterpret_cast<const ::sim_msg::Vec3*>(
      &::sim_msg::_Vec3_default_instance_);
}
inline ::sim_msg::Vec3* Location::release_position() {
  // @@protoc_insertion_point(field_release:sim_msg.Location.position)
  
  ::sim_msg::Vec3* temp = position_;
  position_ = NULL;
  return temp;
}
inline ::sim_msg::Vec3* Location::mutable_position() {
  
  if (position_ == NULL) {
    auto* p = CreateMaybeMessage<::sim_msg::Vec3>(GetArenaNoVirtual());
    position_ = p;
  }
  // @@protoc_insertion_point(field_mutable:sim_msg.Location.position)
  return position_;
}
inline void Location::set_allocated_position(::sim_msg::Vec3* position) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(position_);
  }
  if (position) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      position = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, position, submessage_arena);
    }
    
  } else {
    
  }
  position_ = position;
  // @@protoc_insertion_point(field_set_allocated:sim_msg.Location.position)
}

// .sim_msg.Vec3 velocity = 3;
inline bool Location::has_velocity() const {
  return this != internal_default_instance() && velocity_ != NULL;
}
inline const ::sim_msg::Vec3& Location::_internal_velocity() const {
  return *velocity_;
}
inline const ::sim_msg::Vec3& Location::velocity() const {
  const ::sim_msg::Vec3* p = velocity_;
  // @@protoc_insertion_point(field_get:sim_msg.Location.velocity)
  return p != NULL ? *p : *reinterpret_cast<const ::sim_msg::Vec3*>(
      &::sim_msg::_Vec3_default_instance_);
}
inline ::sim_msg::Vec3* Location::release_velocity() {
  // @@protoc_insertion_point(field_release:sim_msg.Location.velocity)
  
  ::sim_msg::Vec3* temp = velocity_;
  velocity_ = NULL;
  return temp;
}
inline ::sim_msg::Vec3* Location::mutable_velocity() {
  
  if (velocity_ == NULL) {
    auto* p = CreateMaybeMessage<::sim_msg::Vec3>(GetArenaNoVirtual());
    velocity_ = p;
  }
  // @@protoc_insertion_point(field_mutable:sim_msg.Location.velocity)
  return velocity_;
}
inline void Location::set_allocated_velocity(::sim_msg::Vec3* velocity) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(velocity_);
  }
  if (velocity) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      velocity = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, velocity, submessage_arena);
    }
    
  } else {
    
  }
  velocity_ = velocity;
  // @@protoc_insertion_point(field_set_allocated:sim_msg.Location.velocity)
}

// .sim_msg.Vec3 angular = 4;
inline bool Location::has_angular() const {
  return this != internal_default_instance() && angular_ != NULL;
}
inline const ::sim_msg::Vec3& Location::_internal_angular() const {
  return *angular_;
}
inline const ::sim_msg::Vec3& Location::angular() const {
  const ::sim_msg::Vec3* p = angular_;
  // @@protoc_insertion_point(field_get:sim_msg.Location.angular)
  return p != NULL ? *p : *reinterpret_cast<const ::sim_msg::Vec3*>(
      &::sim_msg::_Vec3_default_instance_);
}
inline ::sim_msg::Vec3* Location::release_angular() {
  // @@protoc_insertion_point(field_release:sim_msg.Location.angular)
  
  ::sim_msg::Vec3* temp = angular_;
  angular_ = NULL;
  return temp;
}
inline ::sim_msg::Vec3* Location::mutable_angular() {
  
  if (angular_ == NULL) {
    auto* p = CreateMaybeMessage<::sim_msg::Vec3>(GetArenaNoVirtual());
    angular_ = p;
  }
  // @@protoc_insertion_point(field_mutable:sim_msg.Location.angular)
  return angular_;
}
inline void Location::set_allocated_angular(::sim_msg::Vec3* angular) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(angular_);
  }
  if (angular) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      angular = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, angular, submessage_arena);
    }
    
  } else {
    
  }
  angular_ = angular;
  // @@protoc_insertion_point(field_set_allocated:sim_msg.Location.angular)
}

// .sim_msg.Vec3 rpy = 5;
inline bool Location::has_rpy() const {
  return this != internal_default_instance() && rpy_ != NULL;
}
inline const ::sim_msg::Vec3& Location::_internal_rpy() const {
  return *rpy_;
}
inline const ::sim_msg::Vec3& Location::rpy() const {
  const ::sim_msg::Vec3* p = rpy_;
  // @@protoc_insertion_point(field_get:sim_msg.Location.rpy)
  return p != NULL ? *p : *reinterpret_cast<const ::sim_msg::Vec3*>(
      &::sim_msg::_Vec3_default_instance_);
}
inline ::sim_msg::Vec3* Location::release_rpy() {
  // @@protoc_insertion_point(field_release:sim_msg.Location.rpy)
  
  ::sim_msg::Vec3* temp = rpy_;
  rpy_ = NULL;
  return temp;
}
inline ::sim_msg::Vec3* Location::mutable_rpy() {
  
  if (rpy_ == NULL) {
    auto* p = CreateMaybeMessage<::sim_msg::Vec3>(GetArenaNoVirtual());
    rpy_ = p;
  }
  // @@protoc_insertion_point(field_mutable:sim_msg.Location.rpy)
  return rpy_;
}
inline void Location::set_allocated_rpy(::sim_msg::Vec3* rpy) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(rpy_);
  }
  if (rpy) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      rpy = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, rpy, submessage_arena);
    }
    
  } else {
    
  }
  rpy_ = rpy;
  // @@protoc_insertion_point(field_set_allocated:sim_msg.Location.rpy)
}

// .sim_msg.Vec3 acceleration = 6;
inline bool Location::has_acceleration() const {
  return this != internal_default_instance() && acceleration_ != NULL;
}
inline const ::sim_msg::Vec3& Location::_internal_acceleration() const {
  return *acceleration_;
}
inline const ::sim_msg::Vec3& Location::acceleration() const {
  const ::sim_msg::Vec3* p = acceleration_;
  // @@protoc_insertion_point(field_get:sim_msg.Location.acceleration)
  return p != NULL ? *p : *reinterpret_cast<const ::sim_msg::Vec3*>(
      &::sim_msg::_Vec3_default_instance_);
}
inline ::sim_msg::Vec3* Location::release_acceleration() {
  // @@protoc_insertion_point(field_release:sim_msg.Location.acceleration)
  
  ::sim_msg::Vec3* temp = acceleration_;
  acceleration_ = NULL;
  return temp;
}
inline ::sim_msg::Vec3* Location::mutable_acceleration() {
  
  if (acceleration_ == NULL) {
    auto* p = CreateMaybeMessage<::sim_msg::Vec3>(GetArenaNoVirtual());
    acceleration_ = p;
  }
  // @@protoc_insertion_point(field_mutable:sim_msg.Location.acceleration)
  return acceleration_;
}
inline void Location::set_allocated_acceleration(::sim_msg::Vec3* acceleration) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(acceleration_);
  }
  if (acceleration) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      acceleration = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, acceleration, submessage_arena);
    }
    
  } else {
    
  }
  acceleration_ = acceleration;
  // @@protoc_insertion_point(field_set_allocated:sim_msg.Location.acceleration)
}

// .sim_msg.Location.EgoLane ego_lane = 7;
inline bool Location::has_ego_lane() const {
  return this != internal_default_instance() && ego_lane_ != NULL;
}
inline void Location::clear_ego_lane() {
  if (GetArenaNoVirtual() == NULL && ego_lane_ != NULL) {
    delete ego_lane_;
  }
  ego_lane_ = NULL;
}
inline const ::sim_msg::Location_EgoLane& Location::_internal_ego_lane() const {
  return *ego_lane_;
}
inline const ::sim_msg::Location_EgoLane& Location::ego_lane() const {
  const ::sim_msg::Location_EgoLane* p = ego_lane_;
  // @@protoc_insertion_point(field_get:sim_msg.Location.ego_lane)
  return p != NULL ? *p : *reinterpret_cast<const ::sim_msg::Location_EgoLane*>(
      &::sim_msg::_Location_EgoLane_default_instance_);
}
inline ::sim_msg::Location_EgoLane* Location::release_ego_lane() {
  // @@protoc_insertion_point(field_release:sim_msg.Location.ego_lane)
  
  ::sim_msg::Location_EgoLane* temp = ego_lane_;
  ego_lane_ = NULL;
  return temp;
}
inline ::sim_msg::Location_EgoLane* Location::mutable_ego_lane() {
  
  if (ego_lane_ == NULL) {
    auto* p = CreateMaybeMessage<::sim_msg::Location_EgoLane>(GetArenaNoVirtual());
    ego_lane_ = p;
  }
  // @@protoc_insertion_point(field_mutable:sim_msg.Location.ego_lane)
  return ego_lane_;
}
inline void Location::set_allocated_ego_lane(::sim_msg::Location_EgoLane* ego_lane) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete ego_lane_;
  }
  if (ego_lane) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      ego_lane = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, ego_lane, submessage_arena);
    }
    
  } else {
    
  }
  ego_lane_ = ego_lane;
  // @@protoc_insertion_point(field_set_allocated:sim_msg.Location.ego_lane)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace sim_msg

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_location_2eproto