#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct SanitizerSanitizerConfig_t {
    std::optional<std::string> Level0Filter;
    std::optional<std::string> Level0Unfilter;
    std::optional<std::string> Level1Filter;
    std::optional<std::string> Level1Unfilter;
    std::optional<std::string> Level2Filter;
    std::optional<std::string> Level2Unfilter;
    std::optional<std::string> Level3Filter;
    std::optional<std::string> Level3Unfilter;
  };

  inline void to_json(nlohmann::json& j, const SanitizerSanitizerConfig_t& v) {
    if(v.Level0Filter)
      j["Level0Filter"] = *v.Level0Filter;
    if(v.Level0Unfilter)
      j["Level0Unfilter"] = *v.Level0Unfilter;
    if(v.Level1Filter)
      j["Level1Filter"] = *v.Level1Filter;
    if(v.Level1Unfilter)
      j["Level1Unfilter"] = *v.Level1Unfilter;
    if(v.Level2Filter)
      j["Level2Filter"] = *v.Level2Filter;
    if(v.Level2Unfilter)
      j["Level2Unfilter"] = *v.Level2Unfilter;
    if(v.Level3Filter)
      j["Level3Filter"] = *v.Level3Filter;
    if(v.Level3Unfilter)
      j["Level3Unfilter"] = *v.Level3Unfilter;
  }

  inline void from_json(const nlohmann::json& j, SanitizerSanitizerConfig_t& v) {
    if(auto it = j.find("Level0Filter"); it != j.end() !it->is_null())
      v.Level0Filter = it->get<std::string>();
    if(auto it = j.find("Level0Unfilter"); it != j.end() !it->is_null())
      v.Level0Unfilter = it->get<std::string>();
    if(auto it = j.find("Level1Filter"); it != j.end() !it->is_null())
      v.Level1Filter = it->get<std::string>();
    if(auto it = j.find("Level1Unfilter"); it != j.end() !it->is_null())
      v.Level1Unfilter = it->get<std::string>();
    if(auto it = j.find("Level2Filter"); it != j.end() !it->is_null())
      v.Level2Filter = it->get<std::string>();
    if(auto it = j.find("Level2Unfilter"); it != j.end() !it->is_null())
      v.Level2Unfilter = it->get<std::string>();
    if(auto it = j.find("Level3Filter"); it != j.end() !it->is_null())
      v.Level3Filter = it->get<std::string>();
    if(auto it = j.find("Level3Unfilter"); it != j.end() !it->is_null())
      v.Level3Unfilter = it->get<std::string>();
  }
}
