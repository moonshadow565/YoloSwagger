#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolHonorV2GameflowPhase_t {
    WaitingForStats_E = 10,
    Lobby_E = 1,
    ChampSelect_E = 5,
    ReadyCheck_E = 4,
    None_E = 0,
    CheckedIntoTournament_E = 3,
    TerminatedInError_E = 13,
    FailedToLaunch_E = 7,
    PreEndOfGame_E = 11,
    Matchmaking_E = 2,
    InProgress_E = 8,
    Reconnect_E = 9,
    EndOfGame_E = 12,
    GameStart_E = 6,
  };

  inline void to_json(nlohmann::json& j, const LolHonorV2GameflowPhase_t& v) {
    switch(v) {
      case LolHonorV2GameflowPhase_t::WaitingForStats_E:
        j = "WaitingForStats";
      break;
      case LolHonorV2GameflowPhase_t::Lobby_E:
        j = "Lobby";
      break;
      case LolHonorV2GameflowPhase_t::ChampSelect_E:
        j = "ChampSelect";
      break;
      case LolHonorV2GameflowPhase_t::ReadyCheck_E:
        j = "ReadyCheck";
      break;
      case LolHonorV2GameflowPhase_t::None_E:
        j = "None";
      break;
      case LolHonorV2GameflowPhase_t::CheckedIntoTournament_E:
        j = "CheckedIntoTournament";
      break;
      case LolHonorV2GameflowPhase_t::TerminatedInError_E:
        j = "TerminatedInError";
      break;
      case LolHonorV2GameflowPhase_t::FailedToLaunch_E:
        j = "FailedToLaunch";
      break;
      case LolHonorV2GameflowPhase_t::PreEndOfGame_E:
        j = "PreEndOfGame";
      break;
      case LolHonorV2GameflowPhase_t::Matchmaking_E:
        j = "Matchmaking";
      break;
      case LolHonorV2GameflowPhase_t::InProgress_E:
        j = "InProgress";
      break;
      case LolHonorV2GameflowPhase_t::Reconnect_E:
        j = "Reconnect";
      break;
      case LolHonorV2GameflowPhase_t::EndOfGame_E:
        j = "EndOfGame";
      break;
      case LolHonorV2GameflowPhase_t::GameStart_E:
        j = "GameStart";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolHonorV2GameflowPhase_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "WaitingForStats"){
      v = LolHonorV2GameflowPhase_t::WaitingForStats_E;
      return;
    }
    if(s == "Lobby"){
      v = LolHonorV2GameflowPhase_t::Lobby_E;
      return;
    }
    if(s == "ChampSelect"){
      v = LolHonorV2GameflowPhase_t::ChampSelect_E;
      return;
    }
    if(s == "ReadyCheck"){
      v = LolHonorV2GameflowPhase_t::ReadyCheck_E;
      return;
    }
    if(s == "None"){
      v = LolHonorV2GameflowPhase_t::None_E;
      return;
    }
    if(s == "CheckedIntoTournament"){
      v = LolHonorV2GameflowPhase_t::CheckedIntoTournament_E;
      return;
    }
    if(s == "TerminatedInError"){
      v = LolHonorV2GameflowPhase_t::TerminatedInError_E;
      return;
    }
    if(s == "FailedToLaunch"){
      v = LolHonorV2GameflowPhase_t::FailedToLaunch_E;
      return;
    }
    if(s == "PreEndOfGame"){
      v = LolHonorV2GameflowPhase_t::PreEndOfGame_E;
      return;
    }
    if(s == "Matchmaking"){
      v = LolHonorV2GameflowPhase_t::Matchmaking_E;
      return;
    }
    if(s == "InProgress"){
      v = LolHonorV2GameflowPhase_t::InProgress_E;
      return;
    }
    if(s == "Reconnect"){
      v = LolHonorV2GameflowPhase_t::Reconnect_E;
      return;
    }
    if(s == "EndOfGame"){
      v = LolHonorV2GameflowPhase_t::EndOfGame_E;
      return;
    }
    if(s == "GameStart"){
      v = LolHonorV2GameflowPhase_t::GameStart_E;
      return;
    }
  }
}
