#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct ChampSelectLcdsGameTimerDTO_t {
    std::string_t currentGameState;
    double_t remainingTimeInMillis;
  };

  inline void to_json(nlohmann::json& j, const ChampSelectLcdsGameTimerDTO_t& v) {
    j["currentGameState"] = v.currentGameState;
    j["remainingTimeInMillis"] = v.remainingTimeInMillis;
  }

  inline void from_json(const nlohmann::json& j, ChampSelectLcdsGameTimerDTO_t& v) {
    v.currentGameState = j.at("currentGameState").get<std::string_t>();
    v.remainingTimeInMillis = j.at("remainingTimeInMillis").get<double_t>();
  }
  inline std::string to_string(const ChampSelectLcdsGameTimerDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
