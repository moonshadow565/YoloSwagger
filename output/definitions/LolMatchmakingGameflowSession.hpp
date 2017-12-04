#ifndef SWAGGER_TYPES_LolMatchmakingGameflowSession_HPP
#define SWAGGER_TYPES_LolMatchmakingGameflowSession_HPP
#include <json.hpp>
#include "LolMatchmakingGameflowPhase.hpp"
#include "LolMatchmakingGameflowGameData.hpp"
#include "LolMatchmakingGameflowGameDodge.hpp"
namespace leagueapi {
  // 
  struct LolMatchmakingGameflowSession {
    // 
    LolMatchmakingGameflowGameData gameData;
    // 
    LolMatchmakingGameflowGameDodge gameDodge;
    // 
    LolMatchmakingGameflowPhase phase;
  };

  inline void to_json(nlohmann::json& j, const LolMatchmakingGameflowSession& v) {
    j["gameData"] = v.gameData;
    j["gameDodge"] = v.gameDodge;
    j["phase"] = v.phase;
  }

  inline void from_json(const nlohmann::json& j, LolMatchmakingGameflowSession& v) {
    v.gameData = j.at("gameData").get<LolMatchmakingGameflowGameData>;
    v.gameDodge = j.at("gameDodge").get<LolMatchmakingGameflowGameDodge>;
    v.phase = j.at("phase").get<LolMatchmakingGameflowPhase>;
  }

}
#endif // SWAGGER_TYPES_LolMatchmakingGameflowSession_HPP
