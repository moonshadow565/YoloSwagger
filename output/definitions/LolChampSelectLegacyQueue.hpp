#ifndef SWAGGER_TYPES_LolChampSelectLegacyQueue_HPP
#define SWAGGER_TYPES_LolChampSelectLegacyQueue_HPP
#include <json.hpp>
#include "LolChampSelectLegacyQueueGameTypeConfig.hpp"
namespace test {
  // 
  struct LolChampSelectLegacyQueue {
'    // 
    bool areFreeChampionsAllowed;
    // 
    LolChampSelectLegacyQueueGameTypeConfig gameTypeConfig;
  };

  void to_json(nlohmann::json& j, const LolChampSelectLegacyQueue& v) {
    j["areFreeChampionsAllowed"] = v.areFreeChampionsAllowed;
    j["gameTypeConfig"] = v.gameTypeConfig;
  }

  void from_json(const nlohmann::json& j, LolChampSelectLegacyQueue& v) {
    v.areFreeChampionsAllowed = j.at("areFreeChampionsAllowed").get<bool>;
    v.gameTypeConfig = j.at("gameTypeConfig").get<LolChampSelectLegacyQueueGameTypeConfig>;
  }

}
#endif // SWAGGER_TYPES_LolChampSelectLegacyQueue_HPP
