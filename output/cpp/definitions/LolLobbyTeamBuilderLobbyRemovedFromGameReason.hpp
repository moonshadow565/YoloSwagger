#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolLobbyTeamBuilderLobbyRemovedFromGameReason_t {
    ServiceShutdown_E = 8,
    Timeout_E = 6,
    Kicked_E = 1,
    GameStartError_E = 7,
    Disbanded_E = 2,
    ServiceError_E = 4,
    Other_E = 5,
    None_E = 0,
    Left_E = 3,
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderLobbyRemovedFromGameReason_t& v) {
    switch(v) {
      case LolLobbyTeamBuilderLobbyRemovedFromGameReason_t::ServiceShutdown_E:
        j = "ServiceShutdown";
      break;
      case LolLobbyTeamBuilderLobbyRemovedFromGameReason_t::Timeout_E:
        j = "Timeout";
      break;
      case LolLobbyTeamBuilderLobbyRemovedFromGameReason_t::Kicked_E:
        j = "Kicked";
      break;
      case LolLobbyTeamBuilderLobbyRemovedFromGameReason_t::GameStartError_E:
        j = "GameStartError";
      break;
      case LolLobbyTeamBuilderLobbyRemovedFromGameReason_t::Disbanded_E:
        j = "Disbanded";
      break;
      case LolLobbyTeamBuilderLobbyRemovedFromGameReason_t::ServiceError_E:
        j = "ServiceError";
      break;
      case LolLobbyTeamBuilderLobbyRemovedFromGameReason_t::Other_E:
        j = "Other";
      break;
      case LolLobbyTeamBuilderLobbyRemovedFromGameReason_t::None_E:
        j = "None";
      break;
      case LolLobbyTeamBuilderLobbyRemovedFromGameReason_t::Left_E:
        j = "Left";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderLobbyRemovedFromGameReason_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "ServiceShutdown"){
      v = LolLobbyTeamBuilderLobbyRemovedFromGameReason_t::ServiceShutdown_E;
      return;
    }
    if(s == "Timeout"){
      v = LolLobbyTeamBuilderLobbyRemovedFromGameReason_t::Timeout_E;
      return;
    }
    if(s == "Kicked"){
      v = LolLobbyTeamBuilderLobbyRemovedFromGameReason_t::Kicked_E;
      return;
    }
    if(s == "GameStartError"){
      v = LolLobbyTeamBuilderLobbyRemovedFromGameReason_t::GameStartError_E;
      return;
    }
    if(s == "Disbanded"){
      v = LolLobbyTeamBuilderLobbyRemovedFromGameReason_t::Disbanded_E;
      return;
    }
    if(s == "ServiceError"){
      v = LolLobbyTeamBuilderLobbyRemovedFromGameReason_t::ServiceError_E;
      return;
    }
    if(s == "Other"){
      v = LolLobbyTeamBuilderLobbyRemovedFromGameReason_t::Other_E;
      return;
    }
    if(s == "None"){
      v = LolLobbyTeamBuilderLobbyRemovedFromGameReason_t::None_E;
      return;
    }
    if(s == "Left"){
      v = LolLobbyTeamBuilderLobbyRemovedFromGameReason_t::Left_E;
      return;
    }
  }
}
