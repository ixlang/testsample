<?php

echo "\n\nvalue = " . $_POST["name"] . "\n\n";

for ($i = 0; $i < 99; $i++){
  if (isset($_FILES["file".$i])){
      echo "******************* --Upload: " . $_FILES["file".$i]["name"]  . "-- *******************\n";
      echo "Type: " . $_FILES["file".$i]["type"]  . "\n";
      echo "Size: " . ($_FILES["file".$i]["size"] / 1024) . " Kb\n";
      echo "Temp file: " . $_FILES["file".$i]["tmp_name"] . "\n\n";

      if (move_uploaded_file($_FILES["file".$i]["tmp_name"],"./". $_FILES["file".$i]["name"])){
        echo "file stored at url: " . dirname('http://'.$_SERVER['SERVER_NAME'].$_SERVER["REQUEST_URI"]) . "/" . $_FILES["file".$i]["name"] . "\n";
      }else{
        echo "file move failed at url: " . dirname('http://'.$_SERVER['SERVER_NAME'].$_SERVER["REQUEST_URI"]). "/" . $_FILES["file".$i]["name"]. "\n\n\n";
      }
      echo "---------------------- file : " . $_FILES["file".$i]["name"]  . " done ----------------------\n\n";
  }
}
