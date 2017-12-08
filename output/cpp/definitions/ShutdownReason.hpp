#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class ShutdownReason_t {
    Invalid_E = 0,
    PlayerBanned_E = 3,
    PlatformMaintenance_E = 1,
    LcuAlphaDisabled_E = 2,
  };

  inline void to_json(nlohmann::json& j, const ShutdownReason_t& v) {
    switch(v) {
      case ShutdownReason_t::Invalid_E:
        j = "Invalid";
      break;
      case ShutdownReason_t::PlayerBanned_E:
        j = "PlayerBanned";
      break;
      case ShutdownReason_t::PlatformMaintenance_E:
        j = "PlatformMaintenance";
      break;
      case ShutdownReason_t::LcuAlphaDisabled_E:
        j = "LcuAlphaDisabled";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, ShutdownReason_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "Invalid"){
      v = ShutdownReason_t::Invalid_E;
      return;
    }
    if(s == "PlayerBanned"){
      v = ShutdownReason_t::PlayerBanned_E;
      return;
    }
    if(s == "PlatformMaintenance"){
      v = ShutdownReason_t::PlatformMaintenance_E;
      return;
    }
    if(s == "LcuAlphaDisabled"){
      v = ShutdownReason_t::LcuAlphaDisabled_E;
      return;
    }
  }
  inline std::string to_string(const ShutdownReason_t& v) {
    switch(v) {
      case ShutdownReason_t::Invalid_E:
        return "Invalid";
      case ShutdownReason_t::PlayerBanned_E:
        return "PlayerBanned";
      case ShutdownReason_t::PlatformMaintenance_E:
        return "PlatformMaintenance";
      case ShutdownReason_t::LcuAlphaDisabled_E:
        return "LcuAlphaDisabled";
    }
  }

}
