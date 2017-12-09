#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolChampSelectLegacyGameflowGameDodgeState_t {
    PartyDodged_E = 49,
    StrangerDodged_E = 50,
    TournamentDodged_E = 51,
    Invalid_E = 48,
  };

  inline void to_json(nlohmann::json& j, const LolChampSelectLegacyGameflowGameDodgeState_t& v) {
    switch(v) {
      case LolChampSelectLegacyGameflowGameDodgeState_t::PartyDodged_E:
        j = "PartyDodged";
      break;
      case LolChampSelectLegacyGameflowGameDodgeState_t::StrangerDodged_E:
        j = "StrangerDodged";
      break;
      case LolChampSelectLegacyGameflowGameDodgeState_t::TournamentDodged_E:
        j = "TournamentDodged";
      break;
      case LolChampSelectLegacyGameflowGameDodgeState_t::Invalid_E:
        j = "Invalid";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolChampSelectLegacyGameflowGameDodgeState_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "PartyDodged"){
      v = LolChampSelectLegacyGameflowGameDodgeState_t::PartyDodged_E;
      return;
    }
    if(s == "StrangerDodged"){
      v = LolChampSelectLegacyGameflowGameDodgeState_t::StrangerDodged_E;
      return;
    }
    if(s == "TournamentDodged"){
      v = LolChampSelectLegacyGameflowGameDodgeState_t::TournamentDodged_E;
      return;
    }
    if(s == "Invalid"){
      v = LolChampSelectLegacyGameflowGameDodgeState_t::Invalid_E;
      return;
    }
  }
  inline std::string to_string(const LolChampSelectLegacyGameflowGameDodgeState_t& v) {
    switch(v) {
      case LolChampSelectLegacyGameflowGameDodgeState_t::PartyDodged_E:
        return "PartyDodged";
      case LolChampSelectLegacyGameflowGameDodgeState_t::StrangerDodged_E:
        return "StrangerDodged";
      case LolChampSelectLegacyGameflowGameDodgeState_t::TournamentDodged_E:
        return "TournamentDodged";
      case LolChampSelectLegacyGameflowGameDodgeState_t::Invalid_E:
        return "Invalid";
    }
  }

}
