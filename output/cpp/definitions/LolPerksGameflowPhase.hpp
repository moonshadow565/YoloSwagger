#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolPerksGameflowPhase_t {
    ChampSelect_E = 5,
    CheckedIntoTournament_E = 3,
    EndOfGame_E = 12,
    FailedToLaunch_E = 7,
    GameStart_E = 6,
    InProgress_E = 8,
    Lobby_E = 1,
    Matchmaking_E = 2,
    None_E = 0,
    PreEndOfGame_E = 11,
    ReadyCheck_E = 4,
    Reconnect_E = 9,
    TerminatedInError_E = 13,
    WaitingForStats_E = 10,
  };

  inline void to_json(nlohmann::json& j, const LolPerksGameflowPhase_t& v) {
    switch(v) {
      case LolPerksGameflowPhase_t::ChampSelect_E:
        j = "ChampSelect";
      break;
      case LolPerksGameflowPhase_t::CheckedIntoTournament_E:
        j = "CheckedIntoTournament";
      break;
      case LolPerksGameflowPhase_t::EndOfGame_E:
        j = "EndOfGame";
      break;
      case LolPerksGameflowPhase_t::FailedToLaunch_E:
        j = "FailedToLaunch";
      break;
      case LolPerksGameflowPhase_t::GameStart_E:
        j = "GameStart";
      break;
      case LolPerksGameflowPhase_t::InProgress_E:
        j = "InProgress";
      break;
      case LolPerksGameflowPhase_t::Lobby_E:
        j = "Lobby";
      break;
      case LolPerksGameflowPhase_t::Matchmaking_E:
        j = "Matchmaking";
      break;
      case LolPerksGameflowPhase_t::None_E:
        j = "None";
      break;
      case LolPerksGameflowPhase_t::PreEndOfGame_E:
        j = "PreEndOfGame";
      break;
      case LolPerksGameflowPhase_t::ReadyCheck_E:
        j = "ReadyCheck";
      break;
      case LolPerksGameflowPhase_t::Reconnect_E:
        j = "Reconnect";
      break;
      case LolPerksGameflowPhase_t::TerminatedInError_E:
        j = "TerminatedInError";
      break;
      case LolPerksGameflowPhase_t::WaitingForStats_E:
        j = "WaitingForStats";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolPerksGameflowPhase_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "ChampSelect"){
      v = LolPerksGameflowPhase_t::ChampSelect_E;
      return;
    }
    if(s == "CheckedIntoTournament"){
      v = LolPerksGameflowPhase_t::CheckedIntoTournament_E;
      return;
    }
    if(s == "EndOfGame"){
      v = LolPerksGameflowPhase_t::EndOfGame_E;
      return;
    }
    if(s == "FailedToLaunch"){
      v = LolPerksGameflowPhase_t::FailedToLaunch_E;
      return;
    }
    if(s == "GameStart"){
      v = LolPerksGameflowPhase_t::GameStart_E;
      return;
    }
    if(s == "InProgress"){
      v = LolPerksGameflowPhase_t::InProgress_E;
      return;
    }
    if(s == "Lobby"){
      v = LolPerksGameflowPhase_t::Lobby_E;
      return;
    }
    if(s == "Matchmaking"){
      v = LolPerksGameflowPhase_t::Matchmaking_E;
      return;
    }
    if(s == "None"){
      v = LolPerksGameflowPhase_t::None_E;
      return;
    }
    if(s == "PreEndOfGame"){
      v = LolPerksGameflowPhase_t::PreEndOfGame_E;
      return;
    }
    if(s == "ReadyCheck"){
      v = LolPerksGameflowPhase_t::ReadyCheck_E;
      return;
    }
    if(s == "Reconnect"){
      v = LolPerksGameflowPhase_t::Reconnect_E;
      return;
    }
    if(s == "TerminatedInError"){
      v = LolPerksGameflowPhase_t::TerminatedInError_E;
      return;
    }
    if(s == "WaitingForStats"){
      v = LolPerksGameflowPhase_t::WaitingForStats_E;
      return;
    }
  }
}
