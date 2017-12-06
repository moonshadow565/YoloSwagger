#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolFeaturedModesQueueGameCategory_t {
    Custom_E = 1,
    None_E = 0,
    PvP_E = 2,
    VersusAi_E = 3,
  };

  inline void to_json(nlohmann::json& j, const LolFeaturedModesQueueGameCategory_t& v) {
    switch(v) {
      case LolFeaturedModesQueueGameCategory_t::Custom_E:
        j = "Custom";
      break;
      case LolFeaturedModesQueueGameCategory_t::None_E:
        j = "None";
      break;
      case LolFeaturedModesQueueGameCategory_t::PvP_E:
        j = "PvP";
      break;
      case LolFeaturedModesQueueGameCategory_t::VersusAi_E:
        j = "VersusAi";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolFeaturedModesQueueGameCategory_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "Custom"){
      v = LolFeaturedModesQueueGameCategory_t::Custom_E;
      return;
    }
    if(s == "None"){
      v = LolFeaturedModesQueueGameCategory_t::None_E;
      return;
    }
    if(s == "PvP"){
      v = LolFeaturedModesQueueGameCategory_t::PvP_E;
      return;
    }
    if(s == "VersusAi"){
      v = LolFeaturedModesQueueGameCategory_t::VersusAi_E;
      return;
    }
  }
}
