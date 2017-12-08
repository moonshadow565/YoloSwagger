#pragma once
#include <json.hpp>
#include <optional>
#include "LolMatchmakingMatchmakingReadyCheckResource.hpp"
#include "LolMatchmakingMatchmakingDodgeData.hpp"
#include "LolMatchmakingMatchmakingSearchState.hpp"
#include "LolMatchmakingMatchmakingSearchErrorResource.hpp"
#include "LolMatchmakingMatchmakingLowPriorityData.hpp"
namespace leagueapi {
  struct LolMatchmakingMatchmakingSearchResource_t {
    std::string lobbyId;
    int32_t queueId;
    std::vector<LolMatchmakingMatchmakingSearchErrorResource_t> errors;
    float timeInQueue;
    LolMatchmakingMatchmakingLowPriorityData_t lowPriorityData;
    LolMatchmakingMatchmakingDodgeData_t dodgeData;
    bool isCurrentlyInQueue;
    LolMatchmakingMatchmakingReadyCheckResource_t readyCheck;
    float estimatedQueueTime;
    LolMatchmakingMatchmakingSearchState_t searchState;
  };

  inline void to_json(nlohmann::json& j, const LolMatchmakingMatchmakingSearchResource_t& v) {
    j["lobbyId"] = v.lobbyId;
    j["queueId"] = v.queueId;
    j["errors"] = v.errors;
    j["timeInQueue"] = v.timeInQueue;
    j["lowPriorityData"] = v.lowPriorityData;
    j["dodgeData"] = v.dodgeData;
    j["isCurrentlyInQueue"] = v.isCurrentlyInQueue;
    j["readyCheck"] = v.readyCheck;
    j["estimatedQueueTime"] = v.estimatedQueueTime;
    j["searchState"] = v.searchState;
  }

  inline void from_json(const nlohmann::json& j, LolMatchmakingMatchmakingSearchResource_t& v) {
    v.lobbyId = j.at("lobbyId").get<std::string>();
    v.queueId = j.at("queueId").get<int32_t>();
    v.errors = j.at("errors").get<std::vector<LolMatchmakingMatchmakingSearchErrorResource_t>>();
    v.timeInQueue = j.at("timeInQueue").get<float>();
    v.lowPriorityData = j.at("lowPriorityData").get<LolMatchmakingMatchmakingLowPriorityData_t>();
    v.dodgeData = j.at("dodgeData").get<LolMatchmakingMatchmakingDodgeData_t>();
    v.isCurrentlyInQueue = j.at("isCurrentlyInQueue").get<bool>();
    v.readyCheck = j.at("readyCheck").get<LolMatchmakingMatchmakingReadyCheckResource_t>();
    v.estimatedQueueTime = j.at("estimatedQueueTime").get<float>();
    v.searchState = j.at("searchState").get<LolMatchmakingMatchmakingSearchState_t>();
  }
  inline std::string to_string(const LolMatchmakingMatchmakingSearchResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
