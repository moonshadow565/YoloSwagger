#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolClashQueueGameCategory_t {
    VersusAi_E = 3,
    Custom_E = 1,
    PvP_E = 2,
    None_E = 0,
  };

  inline void to_json(nlohmann::json& j, const LolClashQueueGameCategory_t& v) {
    switch(v) {
      case LolClashQueueGameCategory_t::VersusAi_E:
        j = "VersusAi";
      break;
      case LolClashQueueGameCategory_t::Custom_E:
        j = "Custom";
      break;
      case LolClashQueueGameCategory_t::PvP_E:
        j = "PvP";
      break;
      case LolClashQueueGameCategory_t::None_E:
        j = "None";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolClashQueueGameCategory_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "VersusAi"){
      v = LolClashQueueGameCategory_t::VersusAi_E;
      return;
    }
    if(s == "Custom"){
      v = LolClashQueueGameCategory_t::Custom_E;
      return;
    }
    if(s == "PvP"){
      v = LolClashQueueGameCategory_t::PvP_E;
      return;
    }
    if(s == "None"){
      v = LolClashQueueGameCategory_t::None_E;
      return;
    }
  }
  inline std::string to_string(const LolClashQueueGameCategory_t& v) {
    switch(v) {
      case LolClashQueueGameCategory_t::VersusAi_E:
        return "VersusAi";
      case LolClashQueueGameCategory_t::Custom_E:
        return "Custom";
      case LolClashQueueGameCategory_t::PvP_E:
        return "PvP";
      case LolClashQueueGameCategory_t::None_E:
        return "None";
    }
  }

}
