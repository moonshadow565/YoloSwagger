#pragma once
#include <json.hpp>
#include <optional>
#include "LolEndOfGameEndOfGamePlayer.hpp"
namespace leagueapi {
  struct LolEndOfGameEndOfGameTeam_t {
    std::vector<int32_t> championBans;
    std::string fullId;
    bool isBottomTeam;
    bool isPlayerTeam;
    bool isWinningTeam;
    std::string memberStatusString;
    std::string name;
    std::vector<LolEndOfGameEndOfGamePlayer_t> players;
    nlohmann::json stats;
    std::string tag;
    int32_t teamId;
  };

  inline void to_json(nlohmann::json& j, const LolEndOfGameEndOfGameTeam_t& v) {
    j["championBans"] = v.championBans;
    j["fullId"] = v.fullId;
    j["isBottomTeam"] = v.isBottomTeam;
    j["isPlayerTeam"] = v.isPlayerTeam;
    j["isWinningTeam"] = v.isWinningTeam;
    j["memberStatusString"] = v.memberStatusString;
    j["name"] = v.name;
    j["players"] = v.players;
    j["stats"] = v.stats;
    j["tag"] = v.tag;
    j["teamId"] = v.teamId;
  }

  inline void from_json(const nlohmann::json& j, LolEndOfGameEndOfGameTeam_t& v) {
    v.championBans = j.at("championBans").get<std::vector<int32_t>>();
    v.fullId = j.at("fullId").get<std::string>();
    v.isBottomTeam = j.at("isBottomTeam").get<bool>();
    v.isPlayerTeam = j.at("isPlayerTeam").get<bool>();
    v.isWinningTeam = j.at("isWinningTeam").get<bool>();
    v.memberStatusString = j.at("memberStatusString").get<std::string>();
    v.name = j.at("name").get<std::string>();
    v.players = j.at("players").get<std::vector<LolEndOfGameEndOfGamePlayer_t>>();
    v.stats = j.at("stats").get<nlohmann::json>();
    v.tag = j.at("tag").get<std::string>();
    v.teamId = j.at("teamId").get<int32_t>();
  }
}
