#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct BuildInfo_t {
    std::string gameBranchFull;
    std::string version;
    std::string patchline;
    std::string branch;
    int32_t contentBuildId;
    std::string gameBranch;
    int32_t gameDataBuildId;
    std::string branchFull;
    std::string patchlineVisibleName;
    int32_t codeBuildId;
  };

  inline void to_json(nlohmann::json& j, const BuildInfo_t& v) {
    j["gameBranchFull"] = v.gameBranchFull;
    j["version"] = v.version;
    j["patchline"] = v.patchline;
    j["branch"] = v.branch;
    j["contentBuildId"] = v.contentBuildId;
    j["gameBranch"] = v.gameBranch;
    j["gameDataBuildId"] = v.gameDataBuildId;
    j["branchFull"] = v.branchFull;
    j["patchlineVisibleName"] = v.patchlineVisibleName;
    j["codeBuildId"] = v.codeBuildId;
  }

  inline void from_json(const nlohmann::json& j, BuildInfo_t& v) {
    v.gameBranchFull = j.at("gameBranchFull").get<std::string>();
    v.version = j.at("version").get<std::string>();
    v.patchline = j.at("patchline").get<std::string>();
    v.branch = j.at("branch").get<std::string>();
    v.contentBuildId = j.at("contentBuildId").get<int32_t>();
    v.gameBranch = j.at("gameBranch").get<std::string>();
    v.gameDataBuildId = j.at("gameDataBuildId").get<int32_t>();
    v.branchFull = j.at("branchFull").get<std::string>();
    v.patchlineVisibleName = j.at("patchlineVisibleName").get<std::string>();
    v.codeBuildId = j.at("codeBuildId").get<int32_t>();
  }
}
