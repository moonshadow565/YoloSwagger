#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolReplaysReplayCreateMetadata_t {
    std::string gameVersion;
    uint64_t gameEnd;
    std::string gameType;
    int32_t queueId;
  };

  inline void to_json(nlohmann::json& j, const LolReplaysReplayCreateMetadata_t& v) {
    j["gameVersion"] = v.gameVersion;
    j["gameEnd"] = v.gameEnd;
    j["gameType"] = v.gameType;
    j["queueId"] = v.queueId;
  }

  inline void from_json(const nlohmann::json& j, LolReplaysReplayCreateMetadata_t& v) {
    v.gameVersion = j.at("gameVersion").get<std::string>();
    v.gameEnd = j.at("gameEnd").get<uint64_t>();
    v.gameType = j.at("gameType").get<std::string>();
    v.queueId = j.at("queueId").get<int32_t>();
  }
  inline std::string to_string(const LolReplaysReplayCreateMetadata_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
