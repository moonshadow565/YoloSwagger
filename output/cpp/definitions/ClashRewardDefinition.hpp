#pragma once
#include <json.hpp>
#include <optional>
#include "ClashRewardType.hpp"
#include "ClashRewardSpec.hpp"
namespace leagueapi {
  struct ClashRewardDefinition_t {
    ClashRewardSpec_t rewardSpec;
    ClashRewardType_t rewardType;
  };

  inline void to_json(nlohmann::json& j, const ClashRewardDefinition_t& v) {
    j["rewardSpec"] = v.rewardSpec;
    j["rewardType"] = v.rewardType;
  }

  inline void from_json(const nlohmann::json& j, ClashRewardDefinition_t& v) {
    v.rewardSpec = j.at("rewardSpec").get<ClashRewardSpec_t>();
    v.rewardType = j.at("rewardType").get<ClashRewardType_t>();
  }
  inline std::string to_string(const ClashRewardDefinition_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
