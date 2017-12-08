#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct TournamentPhaseDTO_t {
    int64_t id;
    int32_t period;
    int64_t registrationTime;
    int64_t startTime;
    int64_t tournamentId;
  };

  inline void to_json(nlohmann::json& j, const TournamentPhaseDTO_t& v) {
    j["id"] = v.id;
    j["period"] = v.period;
    j["registrationTime"] = v.registrationTime;
    j["startTime"] = v.startTime;
    j["tournamentId"] = v.tournamentId;
  }

  inline void from_json(const nlohmann::json& j, TournamentPhaseDTO_t& v) {
    v.id = j.at("id").get<int64_t>();
    v.period = j.at("period").get<int32_t>();
    v.registrationTime = j.at("registrationTime").get<int64_t>();
    v.startTime = j.at("startTime").get<int64_t>();
    v.tournamentId = j.at("tournamentId").get<int64_t>();
  }
  inline std::string to_string(const TournamentPhaseDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
