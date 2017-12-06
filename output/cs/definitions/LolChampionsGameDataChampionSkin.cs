using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolChampionsGameDataChampionSkin
    {
        [DataMember(Name = "cardPath")]
        string CardPath { get; set; }

        [DataMember(Name = "chromaPath")]
        string ChromaPath { get; set; }

        [DataMember(Name = "chromas")]
        LolChampionsGameDataChampionChroma[] Chromas { get; set; }

        [DataMember(Name = "emblems")]
        LolChampionsCollectionsChampionSkinEmblem[] Emblems { get; set; }

        [DataMember(Name = "featuresText")]
        string FeaturesText { get; set; }

        [DataMember(Name = "id")]
        int Id { get; set; }

        [DataMember(Name = "name")]
        string Name { get; set; }

        [DataMember(Name = "rarityGemPath")]
        string RarityGemPath { get; set; }

        [DataMember(Name = "skinType")]
        string SkinType { get; set; }

        [DataMember(Name = "splashPath")]
        string SplashPath { get; set; }

        [DataMember(Name = "splashVideoPath")]
        string SplashVideoPath { get; set; }

        [DataMember(Name = "tilePath")]
        string TilePath { get; set; }

        [DataMember(Name = "uncenteredSplashPath")]
        string UncenteredSplashPath { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolChampionsGameDataChampionSkin {\n");
            sb.Append("  CardPath: ").Append(CardPath).Append("\n");
            sb.Append("  ChromaPath: ").Append(ChromaPath).Append("\n");
            sb.Append("  Chromas: ").Append(Chromas).Append("\n");
            sb.Append("  Emblems: ").Append(Emblems).Append("\n");
            sb.Append("  FeaturesText: ").Append(FeaturesText).Append("\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  Name: ").Append(Name).Append("\n");
            sb.Append("  RarityGemPath: ").Append(RarityGemPath).Append("\n");
            sb.Append("  SkinType: ").Append(SkinType).Append("\n");
            sb.Append("  SplashPath: ").Append(SplashPath).Append("\n");
            sb.Append("  SplashVideoPath: ").Append(SplashVideoPath).Append("\n");
            sb.Append("  TilePath: ").Append(TilePath).Append("\n");
            sb.Append("  UncenteredSplashPath: ").Append(UncenteredSplashPath).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}