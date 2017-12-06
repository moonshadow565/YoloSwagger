#pragma once
#include <json.hpp>
#include <optional>
#include "LolPftGameflowGameDodge.hpp"
#include "LolPftGameflowPhase.hpp"
namespace leagueapi {
  struct LolPftGameflowSession_t {
    LolPftGameflowGameDodge_t gameDodge;
    LolPftGameflowPhase_t phase;
  };

  inline void to_json(nlohmann::json& j, const LolPftGameflowSession_t& v) {
    j["gameDodge"] = v.gameDodge;
    j["phase"] = v.phase;
  }

  inline void from_json(const nlohmann::json& j, LolPftGameflowSession_t& v) {
    v.gameDodge = j.at("gameDodge").get<LolPftGameflowGameDodge_t>();
    v.phase = j.at("phase").get<LolPftGameflowPhase_t>();
  }
}
