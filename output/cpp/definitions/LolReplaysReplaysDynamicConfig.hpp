#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolReplaysReplaysDynamicConfig_t {
    double_t MinutesUntilReplayConsideredLost;
    std::string_t MinSupportedGameServerVersion;
  };

  inline void to_json(nlohmann::json& j, const LolReplaysReplaysDynamicConfig_t& v) {
    j["MinutesUntilReplayConsideredLost"] = v.MinutesUntilReplayConsideredLost;
    j["MinSupportedGameServerVersion"] = v.MinSupportedGameServerVersion;
  }

  inline void from_json(const nlohmann::json& j, LolReplaysReplaysDynamicConfig_t& v) {
    v.MinutesUntilReplayConsideredLost = j.at("MinutesUntilReplayConsideredLost").get<double_t>();
    v.MinSupportedGameServerVersion = j.at("MinSupportedGameServerVersion").get<std::string_t>();
  }
  inline std::string to_string(const LolReplaysReplaysDynamicConfig_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
