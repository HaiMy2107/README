import React, { useState } from 'react';
import AdmZip from 'adm-zip'; // Corrected import statement

const FileExtractor = ({ zipfile }) => { // Removed unnecessary quotes around zipfile
  const [extractedFiles, setExtractedFiles] = useState([]); // Added state to store extracted files

  function extractFiles() {
    const zip = new AdmZip(zipfile);
    const zipEntries = zip.getEntries();

    zipEntries.forEach((zipEntry) => {
      console.log(zipEntry.entryName);
      // Logic to extract each file
      // You can add the extracted file to the state array here
      setExtractedFiles((prevFiles) => [...prevFiles, zipEntry.entryName]);
    });
  }

  return (
    <div>
      <button onClick={extractFiles}>Extract Files</button>
      {/* You can display the extracted files here */}
      <ul>
        {extractedFiles.map((file, index) => (
          <li key={index}>{file}</li>
        ))}
      </ul>
    </div>
  );
};

export default FileExtractor;
