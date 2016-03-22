import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;
import java.util.List;

public class Main {

  public static void main(String[] args) {

    Path path = Paths.get("./", "test.csv");

    try {
      List<String> lines = Files.readAllLines(path);

      for (String line : lines) {
        System.out.println(line);
        String[] details = line.split(",");
        System.out.println(details[0]+" "+details[1]+" : "+details[3]+" "+details[2]);
      }
    } catch (IOException e) {
      System.out.println(e);
    }
  }
}
