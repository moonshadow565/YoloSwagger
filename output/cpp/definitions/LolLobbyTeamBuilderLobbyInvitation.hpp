#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLobbyTeamBuilderLobbyInvitation_t {
    nlohmann::json invitationMetaData;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderLobbyInvitation_t& v) {
    j["invitationMetaData"] = v.invitationMetaData;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderLobbyInvitation_t& v) {
    v.invitationMetaData = j.at("invitationMetaData").get<nlohmann::json>();
  }
}
