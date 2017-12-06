#pragma once
#include <json.hpp>
#include <optional>
#include "LolEndOfGameLoginSummonerData.hpp"
#include "LolEndOfGameSimpleMessage.hpp"
namespace leagueapi {
  struct LolEndOfGameLoginDataPacket_t {
    LolEndOfGameLoginSummonerData_t allSummonerData;
    std::string platformId;
    std::vector<LolEndOfGameSimpleMessage_t> simpleMessages;
  };

  inline void to_json(nlohmann::json& j, const LolEndOfGameLoginDataPacket_t& v) {
    j["allSummonerData"] = v.allSummonerData;
    j["platformId"] = v.platformId;
    j["simpleMessages"] = v.simpleMessages;
  }

  inline void from_json(const nlohmann::json& j, LolEndOfGameLoginDataPacket_t& v) {
    v.allSummonerData = j.at("allSummonerData").get<LolEndOfGameLoginSummonerData_t>();
    v.platformId = j.at("platformId").get<std::string>();
    v.simpleMessages = j.at("simpleMessages").get<std::vector<LolEndOfGameSimpleMessage_t>>();
  }
}
