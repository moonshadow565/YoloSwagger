#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class RiotMessagingServiceState_t {
    Disconnecting_E = 0,
    Disconnected_E = 1,
    Connected_E = 5,
    Connecting_E = 3,
  };

  inline void to_json(nlohmann::json& j, const RiotMessagingServiceState_t& v) {
    switch(v) {
      case RiotMessagingServiceState_t::Disconnecting_E:
        j = "Disconnecting";
      break;
      case RiotMessagingServiceState_t::Disconnected_E:
        j = "Disconnected";
      break;
      case RiotMessagingServiceState_t::Connected_E:
        j = "Connected";
      break;
      case RiotMessagingServiceState_t::Connecting_E:
        j = "Connecting";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, RiotMessagingServiceState_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "Disconnecting"){
      v = RiotMessagingServiceState_t::Disconnecting_E;
      return;
    }
    if(s == "Disconnected"){
      v = RiotMessagingServiceState_t::Disconnected_E;
      return;
    }
    if(s == "Connected"){
      v = RiotMessagingServiceState_t::Connected_E;
      return;
    }
    if(s == "Connecting"){
      v = RiotMessagingServiceState_t::Connecting_E;
      return;
    }
  }
}
