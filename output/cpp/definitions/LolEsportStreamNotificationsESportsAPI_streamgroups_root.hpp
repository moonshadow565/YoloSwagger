#pragma once
#include <json.hpp>
#include <optional>
#include "LolEsportStreamNotificationsEsportsAPI_teams.hpp"
#include "LolEsportStreamNotificationsEsportsAPI_highlanderTournaments.hpp"
#include "LolEsportStreamNotificationsESportsAPI_streamgroups.hpp"
namespace leagueapi {
  struct LolEsportStreamNotificationsESportsAPI_streamgroups_root_t {
    std::vector<LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_t> highlanderTournaments;
    std::vector<LolEsportStreamNotificationsESportsAPI_streamgroups_t> streamgroups;
    std::vector<LolEsportStreamNotificationsEsportsAPI_teams_t> teams;
  };

  inline void to_json(nlohmann::json& j, const LolEsportStreamNotificationsESportsAPI_streamgroups_root_t& v) {
    j["highlanderTournaments"] = v.highlanderTournaments;
    j["streamgroups"] = v.streamgroups;
    j["teams"] = v.teams;
  }

  inline void from_json(const nlohmann::json& j, LolEsportStreamNotificationsESportsAPI_streamgroups_root_t& v) {
    v.highlanderTournaments = j.at("highlanderTournaments").get<std::vector<LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_t>>();
    v.streamgroups = j.at("streamgroups").get<std::vector<LolEsportStreamNotificationsESportsAPI_streamgroups_t>>();
    v.teams = j.at("teams").get<std::vector<LolEsportStreamNotificationsEsportsAPI_teams_t>>();
  }
}
