#pragma once
#include <json.hpp>
#include <optional>
#include "LolLeaguesLeagueTeamMember.hpp"
namespace leagueapi {
  struct LolLeaguesLeagueTeam_t {
    std::string_t id;
    std::vector<LolLeaguesLeagueTeamMember_t> members;
    std::string_t name;
  };

  inline void to_json(nlohmann::json& j, const LolLeaguesLeagueTeam_t& v) {
    j["id"] = v.id;
    j["members"] = v.members;
    j["name"] = v.name;
  }

  inline void from_json(const nlohmann::json& j, LolLeaguesLeagueTeam_t& v) {
    v.id = j.at("id").get<std::string_t>();
    v.members = j.at("members").get<std::vector<LolLeaguesLeagueTeamMember_t>>();
    v.name = j.at("name").get<std::string_t>();
  }
  inline std::string to_string(const LolLeaguesLeagueTeam_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
