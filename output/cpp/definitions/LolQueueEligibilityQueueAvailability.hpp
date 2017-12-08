#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolQueueEligibilityQueueAvailability_t {
    Available_E = 0,
    PlatformDisabled_E = 1,
    DoesntMeetRequirements_E = 2,
  };

  inline void to_json(nlohmann::json& j, const LolQueueEligibilityQueueAvailability_t& v) {
    switch(v) {
      case LolQueueEligibilityQueueAvailability_t::Available_E:
        j = "Available";
      break;
      case LolQueueEligibilityQueueAvailability_t::PlatformDisabled_E:
        j = "PlatformDisabled";
      break;
      case LolQueueEligibilityQueueAvailability_t::DoesntMeetRequirements_E:
        j = "DoesntMeetRequirements";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolQueueEligibilityQueueAvailability_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "Available"){
      v = LolQueueEligibilityQueueAvailability_t::Available_E;
      return;
    }
    if(s == "PlatformDisabled"){
      v = LolQueueEligibilityQueueAvailability_t::PlatformDisabled_E;
      return;
    }
    if(s == "DoesntMeetRequirements"){
      v = LolQueueEligibilityQueueAvailability_t::DoesntMeetRequirements_E;
      return;
    }
  }
  inline std::string to_string(const LolQueueEligibilityQueueAvailability_t& v) {
    switch(v) {
      case LolQueueEligibilityQueueAvailability_t::Available_E:
        return "Available";
      case LolQueueEligibilityQueueAvailability_t::PlatformDisabled_E:
        return "PlatformDisabled";
      case LolQueueEligibilityQueueAvailability_t::DoesntMeetRequirements_E:
        return "DoesntMeetRequirements";
    }
  }

}
