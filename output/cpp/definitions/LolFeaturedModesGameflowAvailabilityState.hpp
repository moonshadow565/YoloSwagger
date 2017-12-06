#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolFeaturedModesGameflowAvailabilityState_t {
    Available_E = 0,
    Configuration_E = 5,
    InGameFlow_E = 4,
    Initializing_E = 1,
    Patching_E = 2,
    PlayerBanned_E = 3,
  };

  inline void to_json(nlohmann::json& j, const LolFeaturedModesGameflowAvailabilityState_t& v) {
    switch(v) {
      case LolFeaturedModesGameflowAvailabilityState_t::Available_E:
        j = "Available";
      break;
      case LolFeaturedModesGameflowAvailabilityState_t::Configuration_E:
        j = "Configuration";
      break;
      case LolFeaturedModesGameflowAvailabilityState_t::InGameFlow_E:
        j = "InGameFlow";
      break;
      case LolFeaturedModesGameflowAvailabilityState_t::Initializing_E:
        j = "Initializing";
      break;
      case LolFeaturedModesGameflowAvailabilityState_t::Patching_E:
        j = "Patching";
      break;
      case LolFeaturedModesGameflowAvailabilityState_t::PlayerBanned_E:
        j = "PlayerBanned";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolFeaturedModesGameflowAvailabilityState_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "Available"){
      v = LolFeaturedModesGameflowAvailabilityState_t::Available_E;
      return;
    }
    if(s == "Configuration"){
      v = LolFeaturedModesGameflowAvailabilityState_t::Configuration_E;
      return;
    }
    if(s == "InGameFlow"){
      v = LolFeaturedModesGameflowAvailabilityState_t::InGameFlow_E;
      return;
    }
    if(s == "Initializing"){
      v = LolFeaturedModesGameflowAvailabilityState_t::Initializing_E;
      return;
    }
    if(s == "Patching"){
      v = LolFeaturedModesGameflowAvailabilityState_t::Patching_E;
      return;
    }
    if(s == "PlayerBanned"){
      v = LolFeaturedModesGameflowAvailabilityState_t::PlayerBanned_E;
      return;
    }
  }
}
