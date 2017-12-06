#pragma once
#include <json.hpp>
#include <optional>
#include "LolEsportStreamNotificationsLiveMatchTeam.hpp"
namespace leagueapi {
  struct LolEsportStreamNotificationsLiveMatch_t {
    std::string tournamentDescription;
    std::string title;
    std::string id;
    std::vector<LolEsportStreamNotificationsLiveMatchTeam_t> teams;
    std::string streamGroup;
  };

  inline void to_json(nlohmann::json& j, const LolEsportStreamNotificationsLiveMatch_t& v) {
    j["tournamentDescription"] = v.tournamentDescription;
    j["title"] = v.title;
    j["id"] = v.id;
    j["teams"] = v.teams;
    j["streamGroup"] = v.streamGroup;
  }

  inline void from_json(const nlohmann::json& j, LolEsportStreamNotificationsLiveMatch_t& v) {
    v.tournamentDescription = j.at("tournamentDescription").get<std::string>();
    v.title = j.at("title").get<std::string>();
    v.id = j.at("id").get<std::string>();
    v.teams = j.at("teams").get<std::vector<LolEsportStreamNotificationsLiveMatchTeam_t>>();
    v.streamGroup = j.at("streamGroup").get<std::string>();
  }
}
