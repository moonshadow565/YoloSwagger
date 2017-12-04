#ifndef SWAGGER_TYPES_SpectateGameInfo_HPP
#define SWAGGER_TYPES_SpectateGameInfo_HPP
#include <json.hpp>
namespace test {
  // 
  struct SpectateGameInfo {
'    // 
    std::string allowObserveMode;
    // 
    std::string dropInSpectateGameId;
    // 
    std::string gameQueueType;
  };

  void to_json(nlohmann::json& j, const SpectateGameInfo& v) {
    j["allowObserveMode"] = v.allowObserveMode;
    j["dropInSpectateGameId"] = v.dropInSpectateGameId;
    j["gameQueueType"] = v.gameQueueType;
  }

  void from_json(const nlohmann::json& j, SpectateGameInfo& v) {
    v.allowObserveMode = j.at("allowObserveMode").get<std::string>;
    v.dropInSpectateGameId = j.at("dropInSpectateGameId").get<std::string>;
    v.gameQueueType = j.at("gameQueueType").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_SpectateGameInfo_HPP
