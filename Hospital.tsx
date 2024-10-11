import React from 'react';

interface HospitalProps {
  onExit: () => void;
}

export function Hospital({ onExit }: HospitalProps) {
  return (
    <div className="absolute inset-0 bg-blue-100 p-4">
      <div className="grid grid-cols-3 gap-4 h-full">
        <div className="bg-white rounded-lg p-2">
          <h3 className="font-bold">Reception</h3>
        </div>
        <div className="bg-green-200 rounded-lg p-2">
          <h3 className="font-bold">Waiting Area</h3>
        </div>
        <div className="bg-red-200 rounded-lg p-2">
          <h3 className="font-bold">Emergency</h3>
        </div>
        <div className="col-span-3 bg-blue-200 rounded-lg p-2">
          <h3 className="font-bold">Doctor's Office</h3>
          <p>Consult the doctor for health advice!</p>
        </div>
        <div className="col-span-3 flex justify-center">
          <button
            className="px-4 py-2 bg-red-500 text-white rounded"
            onClick={onExit}
          >
            Exit Hospital
          </button>
        </div>
      </div>
    </div>
  );
}