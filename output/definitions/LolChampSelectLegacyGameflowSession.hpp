#ifndef SWAGGER_TYPES_LolChampSelectLegacyGameflowSession_HPP
#define SWAGGER_TYPES_LolChampSelectLegacyGameflowSession_HPP
#include <json.hpp>
#include "LolChampSelectLegacyGameflowGameData.hpp"
#include "LolChampSelectLegacyGameflowGameClient.hpp"
#include "LolChampSelectLegacyGameflowPhase.hpp"
namespace leagueapi {
  // 
  struct LolChampSelectLegacyGameflowSession {
    // 
    LolChampSelectLegacyGameflowGameClient gameClient;
    // 
    LolChampSelectLegacyGameflowGameData gameData;
    // 
    LolChampSelectLegacyGameflowPhase phase;
  };

  inline void to_json(nlohmann::json& j, const LolChampSelectLegacyGameflowSession& v) {
    j["gameClient"] = v.gameClient;
    j["gameData"] = v.gameData;
    j["phase"] = v.phase;
  }

  inline void from_json(const nlohmann::json& j, LolChampSelectLegacyGameflowSession& v) {
    v.gameClient = j.at("gameClient").get<LolChampSelectLegacyGameflowGameClient>;
    v.gameData = j.at("gameData").get<LolChampSelectLegacyGameflowGameData>;
    v.phase = j.at("phase").get<LolChampSelectLegacyGameflowPhase>;
  }

}
#endif // SWAGGER_TYPES_LolChampSelectLegacyGameflowSession_HPP
